#include "script_component.hpp"
/*
 * Author: DerZade
 * Creates a new item and stores it in the soldier's chestpack. The item can also be a weapon or a magazine.
 * The item(s) won't be added, if adding them would cause an overflow of the backpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Item/magazine/weapon classname <STRING>
 * 2: Amount <NUMBER> (optional | default: 1)
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player,"FirstAidKit",3] call HAVOC_boc_fnc_addItemToChestpack;
 *
 * Public: No
 */
params [ ["_unit", objNull, [objNull]], ["_item","",[""]], ["_amount",1,[0]] ];
private ["_type"];

if (isNull _unit || _item isEqualTo "" || _amount < 1) exitWith {};

if ([_unit] call FUNC(chestpack) isEqualTo "") exitWith {};

// exit if there is not enough space left
if !([_unit,_item,_amount] call FUNC(canAddItemToChestpack)) exitWith {};

_type = ([_item] call BIS_fnc_itemType) select 0;

if (_type isEqualTo "Magazine") exitWith {
    [_unit,_item,([configFile >> "CfgMagazines" >> _item, "count"] call BIS_fnc_returnConfigEntry), _amount] call FUNC(addMagToChestpack);
};

if (_type isEqualTo "Weapon") exitWith {
    [_unit,[_item, "", "", "", [], [], ""], _amount] call FUNC(addWeaponToChestpack);
};

[_unit, [_item, _amount]] call FUNC(modifyItemAmount);
