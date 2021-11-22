#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {
            QCLASS(Cap_Headphones_BlackLogo),
            QCLASS(Cap_BlackLogo),
            QCLASS(Cap_TanLogo),
            QCLASS(Cap_Earpiece_BlackLogo),
            QCLASS(Cap_Earpiece_TanLogo),
            QCLASS(Cap_Backwards_BlackLogo),
            QCLASS(Cap_Backwards_TanLogo),
            QCLASS(Cap_Headphones_Blackcow),
            QCLASS(Cap_Blackcow),
            QCLASS(Cap_Tancow),
            QCLASS(Cap_Earpiece_Blackcow),
            QCLASS(Cap_Earpiece_Tancow),
            QCLASS(Cap_Backwards_Blackcow),
            QCLASS(Cap_Backwards_Tancow),
            QCLASS(H_MilCap_m98),
            QCLASS(H_MilCap_snow),
            QCLASS(H_Booniehat_m98),
            QCLASS(H_HelmetIA),
            QCLASS(H_HelmetIA_snow),
            QCLASS(H_HelmetB),
            QCLASS(H_HelmetB_snow),
            QCLASS(H_HelmetB_camo),
            QCLASS(H_HelmetB_light),
            QCLASS(H_HelmetB_light_brn),
            QCLASS(H_HelmetB_light_snow),
            QCLASS(H_HelmetSpecB),
            QCLASS(H_HelmetSpecB_brn),
            QCLASS(H_HelmetSpecB_gry),
            QCLASS(H_HelmetSpecB_snow),
            QCLASS(H_Booniehat_trop),
            QCLASS(H_Booniehat_med),
            QCLASS(H_Booniehat_multi),
            QCLASS(H_MilCap_med),
            QCLASS(H_MilCap_trop),
            QCLASS(H_HelmetB_med),
            QCLASS(H_HelmetB_trop)
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
    class CLASS(H_MilCap_m98): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "[Havoc] Military Cap (M98)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\MilCap_m98.paa)};
    };
    class CLASS(H_MilCap_snow): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "[Havoc] Military Cap (Snow)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\MilCap_snow.paa)};
    };
    class CLASS(H_Booniehat_m98): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "[Havoc] Booniehat (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\BoonieHat_m98.paa)};
    };

    class CLASS(H_Booniehat_med): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "[Havoc] Booniehat (CTRG MED)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_booniehat.paa)};
    };
    class CLASS(H_Booniehat_trop): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "[Havoc] Booniehat (CTRG Tropical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_trop_booniehat.paa)};
    };
    class CLASS(H_Booniehat_multi): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "[Havoc] Booniehat (Multicam)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_multi_booniehat.paa)};
    };
    class CLASS(H_MilCap_med): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "[Havoc] Military Cap (CTRG MED)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_cappatrol.paa)};
    };
    class CLASS(H_MilCap_trop): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "[Havoc] Military Cap (CTRG Tropical)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_trop_cappatrol.paa)};
    };
    // old helmet
    class CLASS(H_HelmetIA): H_HelmetIA {
        author = AUTHOR;
        displayName = "[Havoc] Modular Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_old.paa)};
    };
    class CLASS(H_HelmetIA_snow): H_HelmetIA {
        author = AUTHOR;
        displayName = "[Havoc] Modular Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_old_snow.paa)};
    };

    // regular helmet
    class CLASS(H_HelmetB): H_HelmetB {
        author = AUTHOR;
        displayName = "[Havoc] Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa)};
    };
    class CLASS(H_HelmetB_snow): H_HelmetB {
        author = AUTHOR;
        displayName = "[Havoc] Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };
    class CLASS(H_HelmetB_med): H_HelmetB {
        author = AUTHOR;
        displayName = "[Havoc] Combat Helmet (CTRG MED)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_equip1_co.paa)};
    };
    class CLASS(H_HelmetB_trop): H_HelmetB {
        author = AUTHOR;
        displayName = "[Havoc] Combat Helmet (CTRG Tropical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\havoc_trop_equip1_co.paa)};
    };

    // camo
    class CLASS(H_HelmetB_camo): H_HelmetB_camo {
        author = AUTHOR;
        displayName = "[Havoc] Combat Helmet (M98 Camo)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa),"\A3\characters_f\common\data\ghillie2_co.paa"};
    };

    // light
    class CLASS(H_HelmetB_light): H_HelmetB_light {
        author = AUTHOR;
        displayName = "[Havoc] Light Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa)};
    };
    class CLASS(H_HelmetB_light_brn): H_HelmetB_light {
        author = AUTHOR;
        displayName = "[Havoc] Light Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_base.paa)};
    };
    class CLASS(H_HelmetB_light_snow): H_HelmetB_light {
        author = AUTHOR;
        displayName = "[Havoc] Light Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };

    // spec ops
    class CLASS(H_HelmetSpecB): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_M98.paa)};
    };
    class CLASS(H_HelmetSpecB_brn): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_base.paa)};
    };
    class CLASS(H_HelmetSpecB_gry): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "[Havoc] Enhanced Combat Helmet (Grey)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_grey.paa)};
    };
    class CLASS(H_HelmetSpecB_snow): H_HelmetSpecB {
        author = AUTHOR;
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
    class CLASS(Cap_Headphones_BlackLogo): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Cap_Headphones_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blacklogo_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };


    class CLASS(Cap_BlackLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Cap_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class CLASS(Cap_TanLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
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

    class CLASS(Cap_Earpiece_BlackLogo): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = AUTHOR;
        displayname = CSTRING(Cap_Earpiece_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class CLASS(Cap_Earpiece_TanLogo): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = AUTHOR;
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

    class CLASS(Cap_Backwards_BlackLogo): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = AUTHOR;
        displayName = CSTRING(Cap_Backwards_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class CLASS(Cap_Backwards_TanLogo): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = AUTHOR;
        displayName = CSTRING(Cap_Backwards_TanLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };
//cap cow

    class CLASS(Cap_Headphones_Blackcow): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Cap_Headphones_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blackcow_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };

    class CLASS(Cap_Blackcow): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Cap_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blackcow_co.paa)};
    };
    class CLASS(Cap_Tancow): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Cap_Tancow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tancow_co.paa)};
    };

    class CLASS(Cap_Earpiece_Blackcow): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = AUTHOR;
        displayname = CSTRING(Cap_Earpiece_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blackcow_co.paa)};
    };
    class CLASS(Cap_Earpiece_Tancow): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = AUTHOR;
        displayname = CSTRING(Cap_Earpiece_Tancow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tancow_co.paa)};
    };

    class CLASS(Cap_Backwards_Blackcow): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = AUTHOR;
        displayName = CSTRING(Cap_Backwards_Blackcow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blackcow_co.paa)};
    };
    class CLASS(Cap_Backwards_Tancow): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = AUTHOR;
        displayName = CSTRING(Cap_Backwards_Tancow);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tancow_co.paa)};
    };

};
