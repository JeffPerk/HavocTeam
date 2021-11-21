class CBA_Extended_EventHandlers;
class CfgVehicles {

    // CARRYALL BASE

    class B_Carryall_Base;

    class CLASS(Carryall_01_Base): B_Carryall_Base {
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        author = AUTHOR;
        // maximumLoad = 320;
        // mass = 60;
        maximumLoad = 360;
        mass = 48.5;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 30;
        transportMaxWeapons = 2;
        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
        isBackpack = 1;
    };

    // CARRYALL BLACK

    class CLASS(Carryall_01_BLACK): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_BLACK";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_black.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_black_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_black_co.paa)};
    };

    class CLASS(Carryall_01_BLACK_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_BLACK_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_black.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_black_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_black_medic_co.paa)};
    };

    // CARRYALL BW D

    class CLASS(Carryall_01_BW_D): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_BW_D";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_bw_d.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_bw_d_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_bw_d_co.paa)};
    };

    class CLASS(Carryall_01_BW_D_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_BW_D_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_bw_d.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_bw_d_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_bw_d_medic_co.paa)};
    };

    // CARRYALL BW W

    class CLASS(Carryall_01_BW_W): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_BW_W";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_bw_w.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_bw_w_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_bw_w_co.paa)};
    };

    class CLASS(Carryall_01_BW_W_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_BW_W_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_bw_w.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_bw_w_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_bw_w_medic_co.paa)};
    };

    // CARRYALL COYOTE

    class CLASS(Carryall_01_COYOTE): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_COYOTE";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_coyote.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_coyote_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_coyote_co.paa)};
    };

    class CLASS(Carryall_01_COYOTE_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_COYOTE_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_coyote.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_coyote_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_coyote_medic_co.paa)};
    };

    // CARRYALL GREEN DARK

    class CLASS(Carryall_01_GREEN_DARK): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_GREEN_DARK";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_green_dark.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_green_dark_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_green_dark_co.paa)};
    };

    class CLASS(Carryall_01_GREEN_DARK_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_GREEN_DARK_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_green_dark.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_green_dark_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_green_dark_medic_co.paa)};
    };

    // CARRYALL GREEN DIGITAL

    class CLASS(Carryall_01_GREEN_DGTL): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_GREEN_DGTL";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_green_dgtl.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_green_dgtl_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_green_dgtl_co.paa)};
    };

    class CLASS(Carryall_01_GREEN_DGTL_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_GREEN_DGTL_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_green_dgtl.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_green_dgtl_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_green_dgtl_medic_co.paa)};
    };

    // CARRYALL GREEN RANGER

    class CLASS(Carryall_01_GREEN_RNGR): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_GREEN_RNGR";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_green_rngr.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_green_rngr_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_green_rngr_co.paa)};
    };

    class CLASS(Carryall_01_GREEN_RNGR_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_GREEN_RNGR_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_green_rngr.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_green_rngr_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_green_rngr_medic_co.paa)};
    };

    // CARRYALL HEX CAMO

    class CLASS(Carryall_01_HEX_CAMO): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_HEX_CAMO";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_hex_camo.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_hex_camo_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_hex_camo_co.paa)};
    };

    class CLASS(Carryall_01_HEX_CAMO_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_HEX_CAMO_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_hex_camo.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_hex_camo_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_hex_camo_medic_co.paa)};
    };

    // CARRYALL HEX GREEN

    class CLASS(Carryall_01_HEX_GREEN): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_HEX_GREEN";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_hex_green.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_hex_green_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_hex_green_co.paa)};
    };

    class CLASS(Carryall_01_HEX_GREEN_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_HEX_GREEN_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_hex_green.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_hex_green_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_hex_green_medic_co.paa)};
    };

    // CARRYALL MARPAT D

    class CLASS(Carryall_01_MARPAT_D): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_MARPAT_D";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_marpat_d.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_marpat_d_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_marpat_d_co.paa)};
    };

    class CLASS(Carryall_01_MARPAT_D_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_MARPAT_D_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_marpat_d.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_marpat_d_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_marpat_d_medic_co.paa)};
    };

    // CARRYALL MARPAT W

    class CLASS(Carryall_01_MARPAT_W): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_MARPAT_W";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_marpat_w.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_marpat_w_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_marpat_w_co.paa)};
    };

    class CLASS(Carryall_01_MARPAT_W_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_MARPAT_W_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_marpat_w.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_marpat_w_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_marpat_w_medic_co.paa)};
    };

    // CARRYALL MTP

    class CLASS(Carryall_01_MTP): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_MTP";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_mtp.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_mtp_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_mtp_co.paa)};
    };

    class CLASS(Carryall_01_MTP_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_MTP_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_mtp.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_mtp_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_mtp_medic_co.paa)};
    };

    // CARRYALL OCP

    class CLASS(Carryall_01_OCP): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_OCP";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_ocp.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_ocp_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_ocp_co.paa)};
    };

    class CLASS(Carryall_01_OCP_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_OCP_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_ocp.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_ocp_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_ocp_medic_co.paa)};
    };

    // CARRYALL UCP

    class CLASS(Carryall_01_UCP): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_UCP";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_ucp.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_ucp_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_ucp_co.paa)};
    };

    class CLASS(Carryall_01_UCP_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_UCP_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_ucp.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_ucp_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_ucp_medic_co.paa)};
    };

    // CARRYALL WOODLAND

    class CLASS(Carryall_01_WDL): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_WDL";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_wdl.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_wdl_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_wdl_co.paa)};
    };

    class CLASS(Carryall_01_WDL_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_WDL_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_wdl.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_wdl_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_wdl_medic_co.paa)};
    };

    // CARRYALL WOODLAND 2

    class CLASS(Carryall_01_WDL2): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_WDL2";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_wdl.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_wdl2_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_wdl2_co.paa)};
    };

    class CLASS(Carryall_01_WDL2_MEDIC): CLASS(Carryall_01_Base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "$STR_HAVOC_Backpacks_Carryall_01_WDL2_MEDIC";
        descriptionShort = "";
        editorPreview = QPATHTOF(carryall\data\previews\carryall_wdl.jpg);
        picture = QPATHTOF(carryall\data\ui\carryall_wdl2_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(carryall\data\textures\carryall_wdl2_medic_co.paa)};
    };

};
