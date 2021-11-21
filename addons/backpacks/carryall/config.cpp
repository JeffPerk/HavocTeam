#include "..\script_component.hpp"

class CfgPatches {

    class HAVOC_Backpacks_Carryall {
        name = COMPONENT_NAME;
        addonRootClass = "HAVOC_backpacks";
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_weapons_f_ammoboxes",
            "HAVOC_backpacks"
        };
        units[] = {
            QCLASS(Carryall_01_BLACK),
            QCLASS(Carryall_01_BLACK_MEDIC),
            QCLASS(Carryall_01_BW_D),
            QCLASS(Carryall_01_BW_D_MEDIC),
            QCLASS(Carryall_01_BW_W),
            QCLASS(Carryall_01_BW_W_MEDIC),
            QCLASS(Carryall_01_COYOTE),
            QCLASS(Carryall_01_COYOTE_MEDIC),
            QCLASS(Carryall_01_GREEN_DARK),
            QCLASS(Carryall_01_GREEN_DARK_MEDIC),
            QCLASS(Carryall_01_GREEN_DGTL),
            QCLASS(Carryall_01_GREEN_DGTL_MEDIC),
            QCLASS(Carryall_01_GREEN_RNGR),
            QCLASS(Carryall_01_GREEN_RNGR_MEDIC),
            QCLASS(Carryall_01_HEX_CAMO),
            QCLASS(Carryall_01_HEX_CAMO_MEDIC),
            QCLASS(Carryall_01_HEX_GREEN),
            QCLASS(Carryall_01_HEX_GREEN_MEDIC),
            QCLASS(Carryall_01_MARPAT_D),
            QCLASS(Carryall_01_MARPAT_D_MEDIC),
            QCLASS(Carryall_01_MARPAT_W),
            QCLASS(Carryall_01_MARPAT_W_MEDIC),
            QCLASS(Carryall_01_MTP),
            QCLASS(Carryall_01_MTP_MEDIC),
            QCLASS(Carryall_01_OCP),
            QCLASS(Carryall_01_OCP_MEDIC),
            QCLASS(Carryall_01_UCP),
            QCLASS(Carryall_01_UCP_MEDIC),
            QCLASS(Carryall_01_WDL),
            QCLASS(Carryall_01_WDL_MEDIC),
            QCLASS(Carryall_01_WDL2),
            QCLASS(Carryall_01_WDL2_MEDIC)
        };
        weapons[] = {};
        author = AUTHOR;
        authors[] = {
            "O. Jemineh"
        };
        url = URL;

    };

};

#include "CfgVehicles.hpp"
