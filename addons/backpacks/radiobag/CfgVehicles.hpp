#include "..\script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles {
    
    // MODIFIED ENOCH RADIOBAGS
    class B_RadioBag_01_base_F;
    // RADIOBAG 01 BASE
    class GVAR(RadioBag_01_Base): B_RadioBag_01_base_F {
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        author = AUTHOR;
        // maximumLoad = 80;
        // mass = 160;
        maximumLoad = 160; 
        mass = 121.2;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 30;
        transportMaxWeapons = 1;
        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
        isBackpack = 1;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
    };
    
    // RADIOBAG BLACK
    class GVAR(RadioBag_01_BLACK): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_02_BLACK";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_black_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_black_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG DIGI
    class GVAR(RadioBag_01_DIGI): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_A3_C_CfgVehicles_B_RadioBag_01_digi_F0";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_digi_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_AAF_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG EAF
    class GVAR(RadioBag_01_EAF): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_A3_C_CfgVehicles_B_RadioBag_01_eaf_F0";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_eaf_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_EAF_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG GHEX
    class GVAR(RadioBag_01_GHEX): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_02_HEX_GREEN";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_hex_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_gHex_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG HEX
    class GVAR(RadioBag_01_HEX): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_02_HEX_CAMO";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_hex_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_Hex_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG MTP
    class GVAR(RadioBag_01_MTP): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_02_MTP";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_mtp_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_mtp_co.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG TROPIC
    class GVAR(RadioBag_01_TROPIC): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_trop";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_tropic_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_tropic_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG OUCAMO
    
    class GVAR(RadioBag_01_OUCAMO): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_ou";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_oucamo_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_urban_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
    // RADIOBAG WDL
    
    class GVAR(RadioBag_01_WDL): GVAR(RadioBag_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_RadioBag_02_WDL";
        descriptionShort = "";
        editorPreview = "";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\a3\Supplies_F_Enoch\Bags\Data\B_RadioBag_01_WDL_CO.paa"};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };
    
};
