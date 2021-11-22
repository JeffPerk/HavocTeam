#include "script_component.hpp"
class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    #define MACRO_HAVOC_CLASS_COMMON \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    side = 1; \
    faction = QUOTE(PREFIX); \
    show = "true"; \
    uniformClass = "USP_G3C_MC"; \
    class EventHandlers : EventHandlers {class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};}; \


    class rhsusf_army_ocp_helipilot { class EventHandlers; };
    class rhsusf_infantry_socom_marsoc_base { class EventHandlers; };


    //////////////////////////////////////////

    class GVAR(helipilot): rhsusf_army_ocp_helipilot {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "Default";
        displayName = "Pilot";
        uniformClass = "U_B_HeliPilotCoveralls";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        respawnItems[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
                class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {
            };
        };
        linkedItems[] = {"USP_CRYE_CPC_MC", "rhsusf_hgu56p", "", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "", "rhsusf_acc_anpeq15", "rhsusf_acc_ACOG2", "rhsusf_acc_kac_grip", "", "", "", ""};
        respawnLinkedItems[] = {"USP_CRYE_CPC_MC", "rhsusf_hgu56p", "", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "", "rhsusf_acc_anpeq15", "rhsusf_acc_ACOG2", "rhsusf_acc_kac_grip", "", "", "", ""};
    };   

    ////////////////////////////////////
    class GVAR(socom): rhsusf_infantry_socom_marsoc_base {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher";
        uniformClass = "USP_G3C_CU_KP_MX_MC";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        respawnItems[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {
            };
        };
        linkedItems[] = {"USP_CRYE_JPC_ASLTB_CBR", "USP_IHPS_COV_CT3_TAN_MC", "rhs_ess_black", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "", "rhsusf_acc_anpeq15", "rhsusf_acc_su230", "", "", "", "", ""};
        respawnLinkedItems[] = {"USP_CRYE_JPC_ASLTB_CBR", "USP_IHPS_COV_CT3_TAN_MC", "rhs_ess_black", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "", "rhsusf_acc_anpeq15", "rhsusf_acc_su230", "", "", "", "", ""};
    }; 
};

