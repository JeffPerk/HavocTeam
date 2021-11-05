
if (EGVAR(common,aceTagging)) then {
    [
        QGVAR(enabled),
        "CHECKBOX",
        [LSTRING(Enabled), LSTRING(Enabled_Description)],
        COMPONENT_NAME,
        false,
        true
    ] call CBA_fnc_addSetting;
};
