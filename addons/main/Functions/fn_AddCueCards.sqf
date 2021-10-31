// not documented: postInit

if !(hasinterface) exitwith {};
if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitwith {};

_cueCardsData = [
 //  0 - CASEVAC Request Card
 [
  "z\havoc\addons\Media\images\cuecards\medivac.paa",
  "CASEVAC Request Card"
 ],

 // 1 - Contact Report Card
 [
  "z\havoc\addons\Media\images\cuecards\tic.paa",
  "Contact Report Card"
 ],

 //  2 - CAS Checkin  Card
 [
  "z\havoc\addons\Media\images\cuecards\cascheck.paa",
  "CAS Check IN Card"
 ],

 //  3 - CAS Card
 [
  "z\havoc\addons\Media\images\cuecards\casbrief.paa",
  "CAS Briefing Card"
 ],

 //  4 - Salute Card
 [
  "z\havoc\addons\Media\images\cuecards\salute.paa",
  "(SALUTE) Card"
 ],
  //  5 - ACE Card
 [
  "z\havoc\addons\Media\images\cuecards\ace.paa",
  "(ACE) Card"
 ],
 //  6 - Front Line Trace ( POSREP ) Card
 [
  "z\havoc\addons\Media\images\cuecards\posrep.paa",
  "Front Line Trace ( POSREP ) Card"
 ],
 //  7 - Vehicle Report (DEFREP) Card
 [
  "z\havoc\addons\Media\images\cuecards\venicle.paa",
  "Vehicle Report (DEFREP) Card"
 ],
 //  8 - Bandages
 [
  "z\havoc\addons\Media\images\cuecards\bandages.paa",
  "Bandages Notes"
 ],
 //  9 - Medical Notes
 [
  "z\havoc\addons\Media\images\cuecards\mednotes.paa",
  "Medical Notes"
 ],
 //  10 - Medical Process
 [
  "z\havoc\addons\Media\images\cuecards\medproces.paa",
  "Medical Process"
 ],
 //  11 - Call for Fire
 [
  "z\havoc\addons\Media\images\cuecards\cff.paa",
  "Call for Fire"
 ],
 //  12 - Method of Fire and Control
 [
  "z\havoc\addons\Media\images\cuecards\mfc.paa",
  "Method of Fire and Control"
 ],
 //  13 - Rotary Landing 
 [
  "z\havoc\addons\Media\images\cuecards\landingb.paa",
  "Rotary Landing"
 ]
];

// Add Parent Action
_parentAction = [
 "CueCardAction",
 "Cue Cards",
 "",
 {diag_log "running parent action"},
 {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _parentAction] call ace_interact_menu_fnc_addActionToObject;

// Add Action to open notepad
_npAction = [
 "openNotepad",
 "Open Notepad",
 "", // see if this looks nice or not TODO
 {
   _this spawn {
   params ["_target", "_caller"];

   diag_log format ["[[LOGGING]] Target: %1", _target];

   disableserialization;
   ([] call bis_fnc_displayMission) createdisplay "RscNotepad";
   [missionnamespace,"cueCardShown",[_target] + ["Notepad"]] spawn bis_fnc_callScriptedEventHandler;
  };
 },
 {true},
 {},
 [],
 ""
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "CueCardAction"], _npAction] call ace_interact_menu_fnc_addActionToObject;

// Add Cue Card Actions
{

 _x params [
  "_texture",
  "_name"
 ];

 _title = format ["Show %1", _name];
 _id = format ["cueCardAction_%1", _forEachIndex];

 diag_log format ["[[LOGGING]]  ID: %1    Title: %2", _id, _title];

 _action = [
  _id,
  _title,
  _texture, // see if this looks nice or not TODO
  {
   _this spawn {
    params ["_target", "_caller", "_data"];

    diag_log format ["[[LOGGING]] Target: %2    Data: %1", _data, _target];

    disableserialization;
    missionNamespace setVariable ["RscDisplayCueCard_data", _data];
    ([] call bis_fnc_displayMission) createdisplay "RscDisplayCueCard";
    ([] call bis_fnc_displayMission) createdisplay "NotepadDialog";
    [missionnamespace,"cueCardShown",[_target] + _data] spawn bis_fnc_callScriptedEventHandler;
   };
  },
  {true},
  {},
  _x,
  ""
 ] call ace_interact_menu_fnc_createAction;

 [player, 1, ["ACE_SelfActions", "CueCardAction"], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _cueCardsData;
