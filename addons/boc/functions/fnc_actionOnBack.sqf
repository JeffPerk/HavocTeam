#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggered by the onBack-action. Handles removing chestpack and adding backpack with same content.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call HAVOC_boc_fnc_actionOnBack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];
private ["_chestpack","_chestpackLoadout","_unitLoadout"];

if (isNull _unit) exitWith {};

_chestpack = [_unit] call FUNC(chestpack);
_chestpackLoadout = [_unit] call FUNC(chestpackLoadout);

// make sure the player has a chestpack and no backpack
if ((_chestpack isEqualTo "") or !(backpack _unit isEqualTo "")) exitWith {};

_unitLoadout = +(getUnitLoadout _unit);
_unitLoadout set [5, [_chestpack, _chestpackLoadout]];
_unit setUnitLoadout _unitLoadout;
[_unit] call FUNC(removeChestpack);
