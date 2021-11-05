#include "script_component.hpp"

if (EGVAR(common,aceFastroping)) then {
    [
        QGVAR(autoAdd),
        "CHECKBOX",
        [LSTRING(autoAdd), LSTRING(autoAdd_Description)],
        COMPONENT_NAME,
        true,
        true
    ] call CBA_fnc_addSetting;
};
