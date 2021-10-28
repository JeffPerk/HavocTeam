// Creator Actions
[
    "HAVOC_CreatorActions_Master",
    "CHECKBOX",
    ["Enable Creator Actions", "Show/Hide Creator Actions in ACE Self Interaction Menu"],
    "HAVOC Creator Actions",
    true,
    true,
    {
  if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {call HAVOC_fnc_InitCreatorActions};
    }
] call CBA_Settings_fnc_init;

[
    "HAVOC_CreatorActions_Channels",
    "CHECKBOX",
    ["Enable Channel Actions", "Add Creator Actions to enable/disable channels"],
    "HAVOC Creator Actions",
    true,
    true,
    {
  if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {call HAVOC_fnc_InitChannelActions};
    }
] call CBA_Settings_fnc_init;

/*
[
    "HAVOC_CreatorActions_MarkerSaving",
    "CHECKBOX",
    ["Enable SaveMarkers", "Add Creator Actions to save/load markers"],
    "HAVOC Creator Actions",
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
   ] call HAVOC_fnc_addCreatorAction;
  };
    }
] call CBA_Settings_fnc_init;
*/ // broken as fuck, crashes the game...

[
    "HAVOC_CreatorActions_EndMission",
    "CHECKBOX",
    ["Enable EndMission", "Add Creator Actions to end the mission and return players to the lobby"],
    "HAVOC Creator Actions",
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
   ] call HAVOC_fnc_addCreatorAction;

   [
    "EndMissionFail",
    "<t color='#ff0000'>Mission Failure</t>",
    "",
    {["EveryoneLost"] remoteExec ["BIS_fnc_endMissionServer", 2]},
    {true}
   ] call HAVOC_fnc_addCreatorAction;
  };
    }
] call CBA_Settings_fnc_init;