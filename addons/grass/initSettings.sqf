[
    QGVAR(enabled),
    "CHECKBOX",
    [LSTRING(Forced), LSTRING(Forced_Description)],
    COMPONENT_NAME,
    false,
    1,
    {[_this] call FUNC(toggle)}
] call CBA_fnc_addSetting;
