#include "script_component.hpp"
/*
 * Author: DerZade
 * Adds a chestpack to a unit. If a unit already has one, the old chestpack will be ignored and will be deleted completely.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Backpack Classname <STRING>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player,"B_Kitbag_rgr"] call HAVOC_boc_fnc_addChestpack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]], ["_chestpackClass","",[""]] ];
private ["_getInID","_getOutID","_animID","_killedID","_weaponHolder"];

if (isNull _unit || {_chestpackClass isEqualTo ""}) exitWith {};

// add HandleDisconnect-EH on server if not done yet
if !(missionNamespace getVariable [QGVAR(HDCEHadded),false]) then {
    ["HandleDisconnect",FUNC(EHHandleDisconnect)] remoteExecCall ["addMissionEventHandler", 2];
    GVAR(HDCEHadded) = true;
    publicVariable QGVAR(HDCEHadded);
};

// delete existing chestpack, if there is one
if !([_unit] call FUNC(chestpack) isEqualTo "") then {
    [_unit] call FUNC(removeChestpack);
};

// add EHs
_getInID = _unit addEventHandler ["GetInMan",FUNC(EHGetIn)];
_getOutID = _unit addEventHandler ["GetOutMan",FUNC(EHGetOut)];
_animID = _unit addEventHandler ["AnimDone",FUNC(EHAnimDone)];
_killedID = _unit addEventHandler ["Killed",FUNC(EHKilled)];
_weaponHolder = createVehicle [QGVAR(weaponHolder), getPos _unit, [], 0, "CAN_COLLIDE"];
_weaponHolder addBackpackCargoGlobal [_chestpackClass, 1];

if (GVAR(forceWalk)) then {
    [_unit, "forceWalk", QGVAR(forceMovementSpeed), true] call ace_common_fnc_statusEffect_set;
} else {
    [_unit, "blockSprint", QGVAR(forceMovementSpeed), true] call ace_common_fnc_statusEffect_set;
};

_unit setVariable [QGVAR(preventProne),true,true];

_unit setVariable [QGVAR(chestpack),[[_chestpackClass, _weaponHolder],[_getInID,_getOutID,_animID,_killedID],[]], true];

// execute vehicle shit
if !(vehicle _unit isEqualTo _unit) then {
 [_unit, "", vehicle _unit] call FUNC(EHGetIn);
} else {
 [_unit, "", objNull] call FUNC(EHGetOut);
};
