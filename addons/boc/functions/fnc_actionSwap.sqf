#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggered by the swap-action. Handles removing backpack and adding chestpack with same content.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call HAVOC_boc_fnc_actionSwap;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];
private ["_backpack","_chestpack","_backpackLoadout","_chestpackLoadout","_unitLoadout"];

if (isNull _unit) exitWith {};

_backpack = backpack _unit;
_chestpack = [_unit] call FUNC(chestpack);
_backpackLoadout = +((getUnitLoadout _unit) select 5 select 1);
_chestpackLoadout = [_unit] call FUNC(chestpackLoadout);

// make sure the player has chest- and backpack
if ((_backpack isEqualTo "") or (_chestpack isEqualTo "")) exitWith {};

removeBackpackGlobal _unit;
_unitLoadout = +(getUnitLoadout _unit);
_unitLoadout set [5, [_chestpack, _chestpackLoadout]];
_unit setUnitLoadout _unitLoadout;
[_unit, _backpack] call FUNC(addChestpack);
[_unit, _backpackLoadout] call FUNC(setChestpackLoadout);
