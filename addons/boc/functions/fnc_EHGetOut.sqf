#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggerd by GetOutMan-Eventhandler
 *
 * Arguments:
 * 0: unit <OBJECT>
 * 1: position <STRING>
 * 2: vehicle <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * _this call HAVOC_boc_fnc_EHGetOut;
 *
 * Public: No
 */
params ["_unit","","_veh"];
private ["_weaponHolder"];

if (isNil "_unit" or isNil "_veh") exitWith {["No proper argument(s) given."] call BIS_fnc_error};

_weaponHolder = objectParent ([_unit] call FUNC(chestpackContainer));
[_weaponHolder, [_unit,[0.04,0.12,-0.5],"pelvis"]] remoteExec ["attachTo", 0];
[_weaponHolder, [[0,0,-1],[0.6,1,0]]] remoteExec ["setVectorDirAndUp", 0];
[_weaponHolder, false] remoteExec ["hideObjectGlobal", 0];

if (GVAR(forceWalk)) then {
    [_unit, "forceWalk", QGVAR(forceMovementSpeed), true] call ace_common_fnc_statusEffect_set;
} else {
    [_unit, "blockSprint", QGVAR(forceMovementSpeed), true] call ace_common_fnc_statusEffect_set;
};

_unit setVariable [QGVAR(preventProne),true,true];
