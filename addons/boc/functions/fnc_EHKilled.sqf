#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggerd by Killed-Eventhandler
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * _this call HAVOC_boc_fnc_EHKilled;
 *
 * Public: No
 */
params ["_unit"];
private ["_chestpack","_chestpackitems","_chestpackmags","_holder","_backpack"];

//TODO: check if unit was player
if (GVAR(removeKilledPlayerChestpack)) exitWith {[_unit] call FUNC(removeChestpack);};

_chestpack = [_unit] call FUNC(chestpack);
_chestpackitems =  [_unit, false] call FUNC(chestpackItems);
_chestpackmags = [_unit] call FUNC(chestpackMagazines);
_holder = createVehicle ["WeaponHolderSimulated", (getPos _unit), [], 0, "CAN_COLLIDE"];

//add pack
_holder addBackpackCargoGlobal [_chestpack, 1];
_backpack = firstBackpack _holder;
clearAllItemsFromBackpack _backpack;

//add items
{
    _backpack addItemCargoGlobal [_x, 1];
} forEach _chestpackitems;

//add magazines
{
    _backpack addMagazineAmmoCargo [(_x select 0), (_x select 2), (_x select 1)];
} forEach _chestpackmags;

//remove the backpack from the dead unit
[_unit] call FUNC(removeChestpack);
