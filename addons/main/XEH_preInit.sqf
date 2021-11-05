#include "script_component.hpp"
// Vehicle Crew List
[
    "HAVOC_Main_VehicleCrewList",
    "CHECKBOX",
    ["Vehicle Crew List", "Shows a list of players in a vehicle."],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && { hasinterface }) then  { call YAINA_F_fnc_crewNames};
    }
] call CBA_fnc_addSetting;

// Dynamic Groups
[
    "HAVOC_Main_DynamicGroups",
    "CHECKBOX",
    ["BIS Dynamic Groups", "Enable Vanilla Dynamic Groups system (U Menu)"],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this) then { call HAVOC_fnc_DynamicGroups};
    }
] call CBA_fnc_addSetting;


// PilotCheck
[
    "HAVOC_Main_PilotCheck",
    "CHECKBOX",
    ["Pilot Restrictions", "Restrict aircraft so only those with 'Pilot' Trait can fly."],
    COMPONENT_NAME,
    false,
    true,
    {
         if (_this && { hasinterface }) then  { call HAVOC_fnc_PilotCheck};
    }
] call CBA_fnc_addSetting;

// PilotCheck
[
    "HAVOC_Main_MaydayAccess",
    "LIST",
    ["Aircraft Emergency Access", "Restrict access to the emergency pilot takeover for helicopters (requires Pilot Check Enabled)"],
    COMPONENT_NAME,
    [[0,1,2],["No One", "909 Only", "Everyone"], 2],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Arsenal - Save/Load
[
    "HAVOC_Main_ArsenalSaveLoad",
    "CHECKBOX",
    ["Arsenal - Save/Load", "Should a player be allowed to Save/Load Loadouts in the Arsenal?"],
    COMPONENT_NAME,
    true,
    true,
    {
        if (!_this && { hasinterface }) then  { call HAVOC_fnc_ArsenalLoadSave};
    }
] call CBA_fnc_addSetting;

// Flip Vehicle
[
    "HAVOC_Main_FlipVehicle",
    "CHECKBOX",
    ["Flip Vehicle", "Add an action to players to allow them to flip land vehicles."],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && { hasinterface }) then  { call HAVOC_fnc_FlipVehicle};
    }
] call CBA_fnc_addSetting;

// TFAR - Range Multiplyer
[
    "HAVOC_Main_TFARTransmitRange",
    "SLIDER",
    ["TFAR - Range Multiplyer", "Increase or decrease max Transmit Range. 0.1 = poor range, 3.5 = All of Altis"],
    COMPONENT_NAME,
    [0, 10, 2.5, 1],
    true,
    {

    }
] call CBA_fnc_addSetting;

// TFAR - Terrain Interference
[
    "HAVOC_Main_TFARTerrainInterference",
    "SLIDER",
    ["TFAR - Terrain Interference", "How much Terrain interferes with range. 0.1 = little impact, 2.0 = large impact."],
    COMPONENT_NAME,
    [0, 5, 1, 1],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Cue Cards
/* [
    "HAVOC_Main_CueCards",
    "CHECKBOX",
    ["Cue Cards", "Show/Hide Cue Cards in ACE Self Interaction Menu."],
    COMPONENT_NAME,
    true,
    true,
    {
        if (_this && { hasinterface }) then  { call HAVOC_fnc_AddCueCards};
    }
] call CBA_fnc_addSetting; */

// Diary Defaults
[
    "HAVOC_Main_Diary",
    "CHECKBOX",
    ["Diary Defaults", "Show/Hide Default HAVOC Diary Entries."],
    COMPONENT_NAME,
    true,
    true,
    {
        if (_this && { hasinterface }) then  { call HAVOC_fnc_Diary};
    }
] call CBA_fnc_addSetting;

// MapIcons
[
    "HAVOC_Main_MapIcons",
    "CHECKBOX",
    ["Enable Save/Load Markers", "Enable the MapIcons system to save/load markers"],
    COMPONENT_NAME,
    true,
    true,
    {
  ["havoc-saveMarkers",{
            [] call HAVOC_MI_fnc_openDialog;
        },"all"] call CBA_fnc_registerChatCommand;

        [] call HAVOC_MI_fnc_loadNotification;
    }
] call CBA_fnc_addSetting;

// Fatigue (Vanilla ONLY)
[
    "HAVOC_Main_FatigueVanilla",
    "CHECKBOX",
    ["Fatigue (Vanilla ONLY)", "Enable/Disable Vanilla Fatigue System. Does not apply with @ACE."],
    COMPONENT_NAME,
    true,
    true,
    {
        if (_this && { hasinterface }) then  { call HAVOC_fnc_VanillaFatigue};
    }
] call CBA_fnc_addSetting;


// HAVOC_Main_DynamicSim
[
    "HAVOC_Main_DynamicSim",
    "CHECKBOX",
    ["HAVOC Dynamic Sim", "Simple check for Dynamic Sim enabled. If not enabled it will enable it to default HAVOC Values. "],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && { isserver }) then  { call HAVOC_fnc_DynamicSim};
    }
] call CBA_fnc_addSetting;

// HAVOC_Main_DynamicSim
[
    "HAVOC_Main_LockCamVehicle",
    "CHECKBOX",
    ["HAVOC Lock Camera in Vehicle", "Locks the camera to first-person inside vehicles. If not enabled it will enable it to default HAVOC Values. "],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && {hasInterface}) then  { call HAVOC_fnc_LockCamVehicle};
    }
] call CBA_fnc_addSetting;