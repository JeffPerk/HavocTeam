#include "script_component.hpp"
/*
 * Author: NemesisRE
 * Will add/remove the weigth of hte chestpack to/from a given unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: add weight <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player,true] call HAVOC_boc_fnc_manageWeight;
 *
 * Public: No
 */
params [["_unit",objNull,[objNull]],["_add",true,[true]]];
private ["_chestpackClass","_chestpackItemsMass","_chestpackClassMass","_totalChestpackMass"];

if (isNull _unit) exitWith {false};

if ([_unit] call FUNC(chestpack) isEqualTo "") exitWith {false};

_chestpackClass = [_unit] call FUNC(chestpack);
_chestpackItemsMass = [_unit] call FUNC(loadChestpack);
_chestpackClassMass = [_chestpackClass] call HAVOC_boc_fnc_itemMass;
_totalChestpackMass = _chestpackItemsMass + _chestpackClassMass;

if (_add) then {
    [_unit, _unit, _totalChestpackMass] call ace_movement_fnc_addLoadToUnitContainer;
} else {
    [_unit, _unit, -_totalChestpackMass] call ace_movement_fnc_addLoadToUnitContainer;
};
