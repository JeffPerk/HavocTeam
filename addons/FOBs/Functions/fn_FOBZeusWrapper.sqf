// not documented, wrapper function
#include "compositions.inc"

params ["_size"];

private _fobs = [];
private _name = "";

switch (_size) do {
 case 0: {
  _fobs = [
   [_HAVOC_FOBS_CAMPS] call HAVOC_fnc_getKeys,
   [_HAVOC_FOBS_CAMPS] call HAVOC_fnc_getValues,
   0
  ];
  _name = "Camp";
 };
 case 1: {
  _fobs = [
   [_HAVOC_FOBS_SMALL] call HAVOC_fnc_getKeys,
   [_HAVOC_FOBS_SMALL] call HAVOC_fnc_getValues,
   0
  ];
  _name = "Small";
 };
 case 2: {
  _fobs = [
   [_HAVOC_FOBS_MEDIUM] call HAVOC_fnc_getKeys,
   [_HAVOC_FOBS_MEDIUM] call HAVOC_fnc_getValues,
   0
  ];
  _name = "Medium";
 };
 case 3: {
  _fobs = [
   [_HAVOC_FOBS_LARGE] call HAVOC_fnc_getKeys,
   [_HAVOC_FOBS_LARGE] call HAVOC_fnc_getValues,
   0
  ];
  _name = "Large";
 };
 default { };
};

private _dialogResult = [
 format ["Create Portable FOB - %1", _name],
 [
  ["COMBO", "Type", _fobs]
 ],
 {
  params ["_results", "_args"];
  _results params ["_fob"];
  _args params ["_hoveredEntity", "_size"];

  [_hoveredEntity, _fob, _size] remoteExec ["havoc_fnc_createPortableFOB", 2];
 },
 {},
 [_hoveredEntity, _size]
] call zen_dialog_fnc_create;

if !(_dialogResult) exitWith {
 ["Failed to create zen dialog!", "ErrorLog"] call YAINA_F_fnc_log;
};