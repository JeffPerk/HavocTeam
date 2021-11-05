
if (EGVAR(common,aceSafemode)) then {
    [
        QGVAR(startLocked),
        "CHECKBOX",
        [LSTRING(StartLocked), LSTRING(StartLocked_Description)],
        COMPONENT_NAME,
        true,
        2
    ] call CBA_fnc_addSetting;
};
