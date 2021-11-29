#include "..\script_component.hpp"

class CfgPatches {
    class GVAR(qip) {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(talon_kitbag_coyote),
            QGVAR(talon_kitbag_winter),
            QGVAR(talon_kitbag_khaki),
            QGVAR(TFAR_rt1523g_kitbag),
            QGVAR(kitbag_khaki_west),
            QGVAR(kitbag_coyote_west),
            QGVAR(kitbag_winter_west),
            QGVAR(kitbag_black_west)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_main",
            "A3_Modules_F",
            "A3_UI_F",
            "A3_Structures_F_Items_Electronics",
            "A3_Weapons_F_ItemHolders",
            "tfar_backpacks"
        };
        author = "NemesisRE";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
