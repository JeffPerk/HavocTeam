
if (EGVAR(common,aceFinger)) then {
    [
        QGVAR(vehicleEnabled),
        "CHECKBOX",
        [LSTRING(Vehicle_Enabled), LSTRING(Vehicle_Enabled_Description)],
        COMPONENT_NAME,
        true,
        true
    ] call CBA_fnc_addSetting;
};
