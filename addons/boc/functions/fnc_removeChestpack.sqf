#include "script_component.hpp"
/*
 * Author: DerZade
 * Removes unit's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call HAVOC_boc_fnc_removeChestpack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];
private ["_var"];

if (isNull _unit) exitWith {};

if ([_unit] call FUNC(chestpack) isEqualTo "") exitWith {};

_var = (_unit getVariable [QGVAR(chestpack),nil]);

// delete weaponHolder holding chestpack
deleteVehicle objectParent ([_unit] call FUNC(chestpackContainer));

// remove all EHs
_unit removeEventHandler ["GetInMan",(_var select 1) select 0];
_unit removeEventHandler ["GetOutMan",(_var select 1) select 1];
_unit removeEventHandler ["AnimDone",(_var select 1) select 2];
_unit removeEventHandler ["Killed",(_var select 1) select 3];

if (GVAR(forceWalk)) then {
    [_unit, "forceWalk", QGVAR(forceMovementSpeed), false] call ace_common_fnc_statusEffect_set;
} else {
    [_unit, "blockSprint", QGVAR(forceMovementSpeed), false] call ace_common_fnc_statusEffect_set;
};

_unit setVariable [QGVAR(preventProne),false,true];

[_unit, false] call FUNC(manageWeight);

// reset variable
_unit setVariable [QGVAR(chestpack),nil,true];
