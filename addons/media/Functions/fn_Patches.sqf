/*
Function: HAVOC_fnc_Patches

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

private ["_PatchClass"];
call {
 if (_Section == "HeadhunterHHC") exitwith {_PatchClass = "Logo";};
 if (_Section == "Headhunter1") exitwith {_PatchClass = "Logo";};
 if (_Section == "Headhunter2") exitwith {_PatchClass = "Logo";};
 if (_Section == "Headhunter3") exitwith {_PatchClass = "Logo";};
 if (_Section == "Arrow") exitwith {_PatchClass = "Logo";};
 if (_Section == "Outlaw") exitwith {_PatchClass = "Logo";};
 if (_Section == "Sentinel") exitwith {_PatchClass = "Logo";};
 _PatchClass = "bolo";
};

// ===== Apply the Patch to player.

[BIS_fnc_setUnitInsignia, [_unit,_PatchClass], 5] call CBA_fnc_waitAndExecute;

// ======= When Player Repsawns, apply the patch they had when they died.
_unit addEventHandler ["Respawn", {
 params ["_unit", "_corpse"];
 _OldPatch = _corpse call BIS_fnc_getUnitInsignia;

 [_unit, ""] call BIS_fnc_setUnitInsignia;
 [BIS_fnc_setUnitInsignia, [_unit,_OldPatch], 5] call CBA_fnc_waitAndExecute;
}];
