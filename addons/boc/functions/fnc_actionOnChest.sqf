#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggered by the onChest-action. Handles removing backpack and adding chestpack with same content.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call HAVOC_boc_fnc_actionOnChest;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];
private ["_backpack","_backpackLoadout","_weaponHolder"];

if (isNull _unit) exitWith {};

_backpack = backpack _unit;
_backpackLoadout = +((getUnitLoadout _unit) select 5 select 1);

// make sure the player has no chestpack and a backpack
if ((_backpack isEqualTo "") || {!(([_unit] call FUNC(chestpack)) isEqualTo "")}) exitWith {};

[_unit, _backpack] call FUNC(addChestpack);
[_unit, _backpackLoadout] call FUNC(setChestpackLoadout);
_weaponHolder = objectParent ([_unit] call FUNC(chestpackContainer));
clearBackpackCargoGlobal _weaponHolder;
_unit action ["DropBag", _weaponHolder, _backpack];
