#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // "havoc_TFAR_anarc210_ilbe",
            // "havoc_ilbe_marpatwd_west",
            // "havoc_ilbe_marpatd_west",
            // "havoc_ilbe_coyote_west",
            // "havoc_ilbe_khaki_west",
            // "havoc_TFAR_mr6000l_ilbe",
            // "havoc_ilbe_marpatwd_east",
            // "havoc_ilbe_marpatd_east",
            // "havoc_ilbe_coyote_east",
            // "havoc_ilbe_khaki_east",
            // "havoc_TFAR_anarc164_ilbe",
            // "havoc_ilbe_marpatwd_independent",
            // "havoc_ilbe_marpatd_independent",
            // "havoc_ilbe_coyote_independent",
            // "havoc_ilbe_khaki_independent",
            "talon_kitbag_coyote",
            "talon_kitbag_winter",
            "talon_kitbag_khaki",
            "havoc_TFAR_rt1523g_kitbag",
            "havoc_kitbag_khaki_west",
            "havoc_kitbag_coyote_west",
            "havoc_kitbag_winter_west",
            "havoc_kitbag_black_west",
            "havoc_TFAR_mr3000_kitbag",
            "havoc_kitbag_khaki_east",
            "havoc_kitbag_coyote_east",
            "havoc_kitbag_winter_east",
            "havoc_kitbag_black_east",
            "havoc_TFAR_anprc155_kitbag",
            "havoc_kitbag_khaki_independent",
            "havoc_kitbag_coyote_independent",
            "havoc_kitbag_winter_independent",
            "havoc_kitbag_black_independent"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "HAVOC_main",
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
