#include "script_component.hpp"
/*
 * Author: DerZade
 * Get mass of item based on item type.
 *
 * Arguments:
 * 0: classname <STRING>
 *
 * Return Value:
 * mass <NUMBER>
 *
 * Example:
 * ["FirstAidKit"] call HAVOC_boc_fnc_itemMass;
 *
 * Public: No
 */
params [ ["_item","",[""]] ];
private ["_config","_itemMass"];

if (_item isEqualTo "") exitWith {0};

// TODO: use BIS_fnc_itemType
_config = configNull;
if (isClass (configFile >> "CfgWeapons" >> _item >> "ItemInfo")) then {
    _config = (configFile >> "CfgWeapons" >> _item >> "ItemInfo");
};
if (isClass (configFile >> "CfgWeapons" >> _item >> "WeaponSlotsInfo")) then {
    _config = (configFile >> "CfgWeapons" >> _item >> "WeaponSlotsInfo");
};
if (isClass (configFile >> "CfgMagazines" >> _item)) then {
    _config = (configFile >> "CfgMagazines" >> _item);
};
if (isClass (configFile >> "CfgVehicles" >> _item)) then  {
    _config = (configFile >> "CfgVehicles" >> _item);
};
if (isClass (configFile >> "CfgGlasses" >> _item)) then  {
    _config = (configFile >> "CfgGlasses" >> _item);
};

if (isNull _config) exitWith {0};

_itemMass = [_config, "Mass", 0] call BIS_fnc_returnConfigEntry;

_itemMass;
