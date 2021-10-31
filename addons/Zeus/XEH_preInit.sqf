// AISpawns Modules

[
    "HAVOC_Zeus_Module_AISpawnsEast",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - East", "Enable the Spawn AI - East Zeus module for use with ZEN"],
    "Havoc Zeus",
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["Havoc", "AI Spawn - East", {_this call havoc_fnc_moduleAISpawnsEastZeus}, "\z\havoc\addons\media\images\icons\AI EAST.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

[
    "HAVOC_Zeus_Module_AISpawnsIndep",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - Independent", "Enable the Spawn AI - Independent Zeus module for use with ZEN"],
    "Havoc Zeus",
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["Havoc", "AI Spawn - Independent", {_this call havoc_fnc_moduleAISpawnsIndepZeus}, "\z\havoc\addons\media\images\icons\AI INDEP.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

[
    "HAVOC_Zeus_Module_AISpawnsWest",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - West", "Enable the Spawn AI - West Zeus module for use with ZEN"],
    "Havoc Zeus",
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["Havoc", "AI Spawn - West", {_this call havoc_fnc_moduleAISpawnsWestZeus}, "\z\havoc\addons\media\images\icons\AI WEST.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

// CivilianSpawns Module
[
    "HAVOC_Zeus_Module_CivilianSpawns",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - Civilian", "Enable the Spawn AI Civilians Zeus module for use with ZEN"],
    "Havoc Zeus",
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["Havoc", "AI Spawn - Civilian", {_this call havoc_fnc_moduleCivilianSpawnsZeus}, "\z\havoc\addons\media\images\Icons\AI CIV.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

// SafeZone Module
[
    "HAVOC_Zeus_Module_SafeZone",
    "CHECKBOX",
    ["Zeus Module - Safe Zone", "Enable the Safe Zone Zeus module for use with ZEN"],
    "Havoc Zeus",
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["Havoc", "Safe Zone", {_this call havoc_fnc_moduleSafeZoneZeus}, "\z\havoc\addons\media\images\Icons\Safe_Zone.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

// MedicalDummy Module
[
    "HAVOC_Zeus_Module_MedicalDummy",
    "CHECKBOX",
    ["Zeus Module - Medical Dummy", "Enable the Medical Dummy Zeus module for use with ZEN"],
    "Havoc Zeus",
    false,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["Havoc", "Medical Dummy", {_this call havoc_fnc_moduleCasualty}, "z\havoc\addons\Media\images\icons\Medical Area.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;