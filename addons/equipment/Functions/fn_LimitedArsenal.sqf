/*
Function: havoc_fnc_LimitedArsenal

Description:
 Fills an Ammobox with predefined equipment dependent on _Type. Each Ammobox can be a
 different type and have a different duration.  This function is almost identical to
 havoc_fnc_Arsenal, only the items in the container change.

Arguments:
 _object - Object the Ammobox is applied to.  <OBJECT>
 _type- Type of Ammobox, can be "VANILLA", "RHS" or "Aegis". <STRING>
 _Duration- How long in minutes until the Ammobox is removed. 0 makes it permanent. <SCALAR>

Examples:
 (begin example)
  [this] call havoc_fnc_LimitedArsenal;
  [this, "Aegis", 50] call havoc_fnc_LimitedArsenal;
  [this, "VANILLA"] call havoc_fnc_LimitedArsenal;
  [MyAmmoCrate, "RHS", 0] call havoc_fnc_LimitedArsenal;
 (end)

Author:
 MitchJC
*/

if (!isServer) exitwith {};

params [
 "_object",
 ["_Type", "HAVOC"],
 ["_Duration", 0]
];

call {
 if (_Type isEqualto 0) exitwith {_Type = "HAVOC"};
 if (_Type isEqualto 1) exitwith {_Type = "Winter"};
 if (_Type isEqualto 2) exitwith {_Type = "UnderCover"};
    if (_Type isEqualto 3) exitwith {_Type = "RHS"};
};

if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
 [_object, false] call ace_arsenal_fnc_initBox;
} else {
 ["AmmoboxInit", [_object, false]] call BIS_fnc_arsenal;
};

private [
 "_AvailableItems", "_AvailableHeadgear", "_AvailableGoggles",
 "_AvailableUniforms", "_AvailableVests", "_AvailableBackpacks",
 "_AvailableAttachments", "_AvailableMagazines", "_AvailableWeapons"
];

call {
 if (_Type isEqualTo "HAVOC") exitwith {
  _AvailableItems =[];
        _AvailableHeadgear = [];
        _AvailableGoggles = [];
        _AvailableUniforms = [];
        _AvailableVests = [];
        _AvailableBackpacks = [];
        _AvailableAttachments = [];
        _AvailableMagazines = [];
        _AvailableWeapons = [];
 };



if (_type isEqualTo "RHS") exitwith {
        _AvailableItems =[];
        _AvailableHeadgear = [];
        _AvailableGoggles = [];
        _AvailableUniforms = [];
        _AvailableVests = [];
        _AvailableBackpacks = [];
        _AvailableAttachments = [];
        _AvailableMagazines = [];
        _AvailableWeapons = [];
 };
};


if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
 [_object, _AvailableHeadGear, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableGoggles, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableUniforms, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableVests, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableItems, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableAttachments, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableWeapons, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableBackpacks, true] call ace_arsenal_fnc_addVirtualItems;
 [_object, _AvailableMagazines, true] call ace_arsenal_fnc_addVirtualItems;
} else {
 [_object, _AvailableHeadGear, true] call BIS_fnc_addVirtualItemCargo;
 [_object, _AvailableGoggles, true] call BIS_fnc_addVirtualItemCargo;
 [_object, _AvailableUniforms, true] call BIS_fnc_addVirtualItemCargo;
 [_object, _AvailableVests, true] call BIS_fnc_addVirtualItemCargo;
 [_object, _AvailableItems, true] call BIS_fnc_addVirtualItemCargo;
 [_object, _AvailableAttachments, true] call BIS_fnc_addVirtualItemCargo;
 [_object, _AvailableWeapons, true] call BIS_fnc_addVirtualWeaponCargo;
 [_object, _AvailableBackpacks, true] call BIS_fnc_addVirtualBackpackCargo;
 [_object, _AvailableMagazines, true] call BIS_fnc_addVirtualMagazineCargo;
};

{
 _x addCuratorEditableObjects [[_object], false];
} forEach allCurators;



_handle = [
 {
  (_this select 0) params ["_object", "_duration"];

  if (_duration == 0) exitwith {
   [_handle] call CBA_fnc_removePerFrameHandler;
  };

  if (time > (_duration * 60)) exitwith {
   deletevehicle _object;
   [_handle] call CBA_fnc_removePerFrameHandler;
  };

 }, 60, [_object, _duration]
] call CBA_fnc_addPerFrameHandler;


