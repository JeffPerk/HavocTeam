#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {
            QGVAR(Cap_Headphones_BlackLogo),
            QGVAR(Cap_BlackLogo),
            QGVAR(Cap_TanLogo),
            QGVAR(Cap_Earpiece_BlackLogo),
            QGVAR(Cap_Earpiece_TanLogo),
            QGVAR(Cap_Backwards_BlackLogo),
            QGVAR(Cap_Backwards_TanLogo),
            QGVAR(Cap_Headphones_Blackcow),
            QGVAR(Cap_Blackcow),
            QGVAR(Cap_Tancow),
            QGVAR(Cap_Earpiece_Blackcow),
            QGVAR(Cap_Earpiece_Tancow),
            QGVAR(Cap_Backwards_Blackcow),
            QGVAR(Cap_Backwards_Tancow),
            QGVAR(H_MilCap_m98),
            QGVAR(H_MilCap_snow),
            QGVAR(H_Booniehat_m98),
            QGVAR(H_HelmetIA),
            QGVAR(H_HelmetIA_snow),
            QGVAR(H_HelmetB),
            QGVAR(H_HelmetB_snow),
            QGVAR(H_HelmetB_camo),
            QGVAR(H_HelmetB_light),
            QGVAR(H_HelmetB_light_brn),
            QGVAR(H_HelmetB_light_snow),
            QGVAR(H_HelmetSpecB),
            QGVAR(H_HelmetSpecB_brn),
            QGVAR(H_HelmetSpecB_gry),
            QGVAR(H_HelmetSpecB_snow),
            QGVAR(H_Booniehat_trop),
            QGVAR(H_Booniehat_med),
            QGVAR(H_Booniehat_multi),
            QGVAR(H_MilCap_med),
            QGVAR(H_MilCap_trop),
            QGVAR(H_HelmetB_med),
            QGVAR(H_HelmetB_trop)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Characters_F_EPB"
        };
        VERSION_CONFIG;
  };
};

class cfgWeapons {
    class H_MilCap_ocamo;
    class H_Booniehat_khk;
    class H_HelmetB;
    class H_HelmetB_camo;
    class H_HelmetB_light;
    class H_HelmetSpecB;
    class H_HelmetIA;

    // Soft
    class GVAR(H_MilCap_m98): H_MilCap_ocamo {
        author = QAUTHOR;
        displayName = "[Havoc] Military Cap (M98)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\MilCap_m98.paa)};
    };
    class GVAR(H_MilCap_snow): H_MilCap_ocamo {
        author = QAUTHOR;
        displayName = "[Havoc] Military Cap (Snow)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\MilCap_snow.paa)};
    };
    class GVAR(H_Booniehat_m98): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Havoc] Booniehat (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\BoonieHat_m98.paa)};
    };

    class GVAR(H_Booniehat_med): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Havoc] Booniehat (CTRG MED)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_booniehat.paa)};
    };
    class GVAR(H_Booniehat_trop): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Havoc] Booniehat (CTRG Tropical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_trop_booniehat.paa)};
    };
    class GVAR(H_Booniehat_multi): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Havoc] Booniehat (Multicam)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_multi_booniehat.paa)};
    };
    class GVAR(H_MilCap_med): H_MilCap_ocamo {
        author = QAUTHOR;
        displayName = "[Havoc] Military Cap (CTRG MED)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_cappatrol.paa)};
    };
    class GVAR(H_MilCap_trop): H_MilCap_ocamo {
        author = QAUTHOR;
        displayName = "[Havoc] Military Cap (CTRG Tropical)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_trop_cappatrol.paa)};
    };
    // old helmet
    class GVAR(H_HelmetIA): H_HelmetIA {
        author = QAUTHOR;
        displayName = "[Havoc] Modular Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_old.paa)};
    };
    class GVAR(H_HelmetIA_snow): H_HelmetIA {
        author = QAUTHOR;
        displayName = "[Havoc] Modular Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_old_snow.paa)};
    };

    // regular helmet
    class GVAR(H_HelmetB): H_HelmetB {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa)};
    };
    class GVAR(H_HelmetB_snow): H_HelmetB {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };
    class GVAR(H_HelmetB_med): H_HelmetB {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Helmet (CTRG MED)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_equip1_co.paa)};
    };
    class GVAR(H_HelmetB_trop): H_HelmetB {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Helmet (CTRG Tropical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_trop_equip1_co.paa)};
    };

    // camo
    class GVAR(H_HelmetB_camo): H_HelmetB_camo {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Helmet (M98 Camo)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa),"\A3\characters_f\common\data\ghillie2_co.paa"};
    };

    // light
    class GVAR(H_HelmetB_light): H_HelmetB_light {
        author = QAUTHOR;
        displayName = "[Havoc] Light Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa)};
    };
    class GVAR(H_HelmetB_light_brn): H_HelmetB_light {
        author = QAUTHOR;
        displayName = "[Havoc] Light Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_base.paa)};
    };
    class GVAR(H_HelmetB_light_snow): H_HelmetB_light {
        author = QAUTHOR;
        displayName = "[Havoc] Light Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };

    // spec ops
    class GVAR(H_HelmetSpecB): H_HelmetSpecB {
        author = QAUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_M98.paa)};
    };
    class GVAR(H_HelmetSpecB_brn): H_HelmetSpecB {
        author = QAUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_base.paa)};
    };
    class GVAR(H_HelmetSpecB_gry): H_HelmetSpecB {
        author = QAUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (Grey)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_grey.paa)};
    };
    class GVAR(H_HelmetSpecB_snow): H_HelmetSpecB {
        author = QAUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };

//cap
    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        class ItemInfo;
    };
    class H_Cap_red: HelmetBase {
        class ItemInfo;
    };
    class GVAR(Cap_Headphones_BlackLogo): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = CSTRING(Cap_Headphones_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blacklogo_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };


    class GVAR(Cap_BlackLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = CSTRING(Cap_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class GVAR(Cap_TanLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = CSTRING(Cap_TanLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };


    #define MACRO_EARPIECE_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        model = QPATHTOF(data\cap_earpiece.p3d); \
        class ItemInfo: ItemInfo { \
            mass = 5; \
            uniformModel = QPATHTOF(data\cap_earpiece.p3d); \
        };

    class GVAR(Cap_Earpiece_BlackLogo): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = QAUTHOR;
        displayname = CSTRING(Cap_Earpiece_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class GVAR(Cap_Earpiece_TanLogo): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = QAUTHOR;
        displayname = CSTRING(Cap_Earpiece_TanLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };


    #define MACRO_BACKWARDS_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        model = QPATHTOF(data\cap_backwards.p3d); \
        class ItemInfo: ItemInfo { \
            uniformModel = QPATHTOF(data\cap_backwards.p3d); \
        };

    class GVAR(Cap_Backwards_BlackLogo): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = QAUTHOR;
        displayName = CSTRING(Cap_Backwards_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class GVAR(Cap_Backwards_TanLogo): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = QAUTHOR;
        displayName = CSTRING(Cap_Backwards_TanLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };
//cap cow

    class GVAR(Cap_Headphones_Blackcow): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = CSTRING(Cap_Headphones_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blackcow_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };

    class GVAR(Cap_Blackcow): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = CSTRING(Cap_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blackcow_co.paa)};
    };
    class GVAR(Cap_Tancow): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = QAUTHOR;
        displayName = CSTRING(Cap_Tancow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tancow_co.paa)};
    };

    class GVAR(Cap_Earpiece_Blackcow): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = QAUTHOR;
        displayname = CSTRING(Cap_Earpiece_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blackcow_co.paa)};
    };
    class GVAR(Cap_Earpiece_Tancow): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = QAUTHOR;
        displayname = CSTRING(Cap_Earpiece_Tancow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tancow_co.paa)};
    };

    class GVAR(Cap_Backwards_Blackcow): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = QAUTHOR;
        displayName = CSTRING(Cap_Backwards_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blackcow_co.paa)};
    };
    class GVAR(Cap_Backwards_Tancow): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = QAUTHOR;
        displayName = CSTRING(Cap_Backwards_Tancow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tancow_co.paa)};
    };

};
