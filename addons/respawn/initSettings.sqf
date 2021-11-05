[
    QGVAR(enabled),
    "CHECKBOX",
    [LSTRING(Enabled), LSTRING(Enabled_Description)],
    COMPONENT_NAME,
    false,
    1,
    {[_this] call FUNC(toggle)}
] call CBA_fnc_addSetting;

[
    QGVAR(time),
    "SLIDER",
    [LSTRING(Time), LSTRING(Time_Description)],
    COMPONENT_NAME,
    [1, 900, getNumber (configFile >> "CfgRespawnTemplates" >> QGVAR(default) >> "respawnDelay"), 0],
    1,
    {[_this] call FUNC(adjustTime)}
] call CBA_fnc_addSetting;
