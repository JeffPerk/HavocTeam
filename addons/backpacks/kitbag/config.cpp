#include "..\script_component.hpp"

class CfgPatches {

    class HAVOC_Backpacks_Kitbag {
         name = COMPONENT_NAME;
        addonRootClass = "HAVOC_backpacks";
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_weapons_f_ammoboxes",
            "HAVOC_backpacks"
        };
        units[] = {
            QCLASS(Kitbag_01_BLACK),
            QCLASS(Kitbag_01_BLACK_MEDIC),
            QCLASS(Kitbag_01_BW_D),
            QCLASS(Kitbag_01_BW_D_MEDIC),
            QCLASS(Kitbag_01_BW_W),
            QCLASS(Kitbag_01_BW_W_MEDIC),
            QCLASS(Kitbag_01_COYOTE),
            QCLASS(Kitbag_01_COYOTE_MEDIC),
            QCLASS(Kitbag_01_GREEN_DARK),
            QCLASS(Kitbag_01_GREEN_DARK_MEDIC),
            QCLASS(Kitbag_01_GREEN_DGTL),
            QCLASS(Kitbag_01_GREEN_DGTL_MEDIC),
            QCLASS(Kitbag_01_GREEN_RNGR),
            QCLASS(Kitbag_01_GREEN_RNGR_MEDIC),
            QCLASS(Kitbag_01_HEX_CAMO),
            QCLASS(Kitbag_01_HEX_CAMO_MEDIC),
            QCLASS(Kitbag_01_HEX_GREEN),
            QCLASS(Kitbag_01_HEX_GREEN_MEDIC),
            QCLASS(Kitbag_01_MARPAT_D),
            QCLASS(Kitbag_01_MARPAT_D_MEDIC),
            QCLASS(Kitbag_01_MARPAT_W),
            QCLASS(Kitbag_01_MARPAT_W_MEDIC),
            QCLASS(Kitbag_01_MTP),
            QCLASS(Kitbag_01_MTP_MEDIC),
            QCLASS(Kitbag_01_OCP),
            QCLASS(Kitbag_01_OCP_MEDIC),
            QCLASS(Kitbag_01_UCP),
            QCLASS(Kitbag_01_UCP_MEDIC),
            QCLASS(Kitbag_01_WDL),
            QCLASS(Kitbag_01_WDL_MEDIC)
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
