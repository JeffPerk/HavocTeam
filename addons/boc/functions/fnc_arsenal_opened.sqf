#include "script_component.hpp"
/*
 * Author: DerZade
 * Called by scriptedEventHandler. Creates button.
 *
 * Arguments:
 * 0: Arsenal Display <DISPLAY>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_disp] call HAVOC_boc_fnc_arsenal_opened;
 *
 * Public: No
 */
params ["_display"];
private ["_notshown","_offset","_btn","_pos"];

// exit if BOC is disabled
if (missionNamespace getVariable [QGVAR(disabled),false]) exitWith {};

// get lowest button that is hidden
_notshown = 948;
for "_i" from 948 to 945 step -1 do {
    if !(ctrlShown (_display displayCtrl _i)) then {
        _notshown = _i;
    };
};

// default offset of two buttons
_offset = ((ctrlPosition (_display displayCtrl 932)) select 1) - ((ctrlPosition (_display displayCtrl 930)) select 1);

_btn = _display ctrlCreate ["RscButtonArsenal", 9233];

// set pos
_pos = ctrlPosition (_display displayCtrl (_notshown - 1));
_pos set [1, (_pos select 1) + _offset];
_btn ctrlSetPosition _pos;
_btn ctrlCommit 0;
_btn ctrlSetBackgroundColor [0,0,0,0.5];

// add EH to backpack list and to newly created button
(_display displayCtrl 965) ctrlAddEventHandler ["LBSelChanged",FUNC(arsenal_updateUI)];
_btn ctrlAddEventHandler ["ButtonClick",FUNC(arsenal_onButtonClick)];

// this is for hiding the button when the rest of the ui is hidden (e.g. by pressing BACKSPACE)
_display displayAddEventHandler ["KeyDown", "0 = _this spawn {sleep 0.02; ((_this select 0) displayCtrl 9233) ctrlShow (ctrlShown ((_this select 0) displayCtrl 932));};"];
_display displayAddEventHandler ["MouseButtonUp", "0 = _this spawn {sleep 0.02; ((_this select 0) displayCtrl 9233) ctrlShow (ctrlShown ((_this select 0) displayCtrl 932));};"];

[_display] call FUNC(arsenal_updateUI);
