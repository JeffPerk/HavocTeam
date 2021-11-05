
if (EGVAR(common,aceTowing)) then {
    [
        QGVAR(addToHeavyDutyVehicles),
        "CHECKBOX",
        [LSTRING(AddToHeavyDutyVehicles), LSTRING(AddToHeavyDutyVehicles_Description)],
        COMPONENT_NAME,
        true,
        1,
        {},
        true
    ] call CBA_fnc_addSetting;

    [
        QGVAR(addToCars),
        "CHECKBOX",
        [LSTRING(AddToCars), LSTRING(AddToCars_Description)],
        COMPONENT_NAME,
        false,
        1,
        {},
        true
    ] call CBA_fnc_addSetting;
};
