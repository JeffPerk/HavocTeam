/*
Function: havoc_fnc_Patches

Description:
 Apply Section Patches to Players/Vehicles

Arguments:
 _unit - Player the Patch is applied to. <OBJECT>
 _Section - The Section the Player is in. <STRING>

Examples:
 (begin example)
  [this, "1Section"] call havoc_fnc_Patches;
 (end)

Author:
 MitchJC
*/

params [
 "_unit",
 ["_Section", "Support"]
];
if (_Section isEqualto -1) exitwith {};
private ["_PatchClass"];
call {
    if (_Section isEqualto 0) exitwith {_PatchClass = "Command"};
    if (_Section isEqualto 1) exitwith {_PatchClass = "Red"};
    if (_Section isEqualto 2) exitwith {_PatchClass = "Blue"};
    if (_Section isEqualto 3) exitwith {_PatchClass = "White"};
    if (_Section isEqualto 4) exitwith {_PatchClass = "Yellow";
    if (_Section isEqualto 5) exitwith {_PatchClass = "Green"};
    if (_Section isEqualto 5) exitwith {_PatchClass = "Reaper"};
};
private ["_PatchClass"];


// ===== Apply the Patch to player.

[BIS_fnc_setUnitInsignia, [_unit,_PatchClass], 5] call CBA_fnc_waitAndExecute;

// ======= When Player Repsawns, apply the patch they had when they died.
_unit addEventHandler ["Respawn", {
 params ["_unit", "_corpse"];
 _OldPatch = _corpse call BIS_fnc_getUnitInsignia;

 [_unit, ""] call BIS_fnc_setUnitInsignia;
 [BIS_fnc_setUnitInsignia, [_unit,_OldPatch], 5] call CBA_fnc_waitAndExecute;
}];

    //=========== Set Section
    player setVariable ["havoc_Section", _PatchClass, true];
};