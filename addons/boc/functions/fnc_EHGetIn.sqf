#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggerd by GetInMan-Eventhandler
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
 * _this call HAVOC_boc_fnc_EHGetIn;
 *
 * Public: No
 */
params ["_unit","","_veh"];
private ["_weaponHolder"];

if (isNil "_unit" or isNil "_veh") exitWith {["No proper argument(s) given."] call BIS_fnc_error};

_weaponHolder = objectParent ([_unit] call FUNC(chestpackContainer));
_weaponHolder remoteExec ["detach", 0];
_weaponHolder remoteExec ["hideObjectGlobal", 0];
[_weaponHolder, [-10000,-10000,-100]] remoteExec ["setPos", 0];

if (GVAR(forceWalk)) then {
    [_unit, "forceWalk", QGVAR(forceMovementSpeed), false] call ace_common_fnc_statusEffect_set;
} else {
    [_unit, "blockSprint", QGVAR(forceMovementSpeed), false] call ace_common_fnc_statusEffect_set;
};

_unit setVariable [QGVAR(preventProne),false,true];
