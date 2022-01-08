#include "script_component.hpp"
// Creator Actions
[
    "havoc_CreatorActions_Master",
    "CHECKBOX",
    ["Enable Creator Actions", "Show/Hide Creator Actions in ACE Self Interaction Menu"],
    COMPONENT_NAME,
    true,
    true,
    {
        if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {call havoc_fnc_InitCreatorActions};
    }
] call CBA_fnc_addSetting;

[
    "havoc_CreatorActions_Channels",
    "CHECKBOX",
    ["Enable Channel Actions", "Add Creator Actions to enable/disable channels"],
    COMPONENT_NAME,
    true,
    true,
    {
        if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {call havoc_fnc_InitChannelActions};
    }
] call CBA_fnc_addSetting;

/*
[
    "havoc_CreatorActions_MarkerSaving",
    "CHECKBOX",
    ["Enable SaveMarkers", "Add Creator Actions to save/load markers"],
    COMPONENT_NAME,
    true,
    true,
    {
  if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {
   [
    "SaveMarkers",
    "Save/Load Markers",
    "",
    {[] call HAVOC_MI_fnc_openDialog;},
    {HAVOC_Main_MapIcons}
   ] call havoc_fnc_addCreatorAction;
  };
    }
] call CBA_fnc_addSetting;
*/ // broken as fuck, crashes the game...

[
    "havoc_CreatorActions_EndMission",
    "CHECKBOX",
    ["Enable EndMission", "Add Creator Actions to end the mission and return players to the lobby"],
    COMPONENT_NAME,
    true,
    true,
    {
  if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {
   [
    "EndMissionSuccess",
    "<t color='#00ff00'>Mission Success</t>",
    "",
    {["EveryoneWins"] remoteExec ["BIS_fnc_endMissionServer", 2]},
    {true}
   ] call havoc_fnc_addCreatorAction;

   [
    "EndMissionFail",
    "<t color='#ff0000'>Mission Failure</t>",
    "",
    {["EveryoneLost"] remoteExec ["BIS_fnc_endMissionServer", 2]},
    {true}
   ] call havoc_fnc_addCreatorAction;
  };
    }
] call CBA_fnc_addSetting;