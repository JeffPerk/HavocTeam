params ["_object", "_selection", "_turnOn", "_args"];

if (_turnOn) then {
    [_object, _selection, _args] call HAVOC_fnc_configureScreen;
} else {
    _object setVariable [format ["havoc_CC_screen_%1_on", _selection], false, true];
    _object setObjectTextureGlobal [_selection, "z\havoc\addons\media\images\cc_screen_standby.paa"];

    [_object, _selection] remoteExec ["havoc_fnc_deleteCamera", 0];
};