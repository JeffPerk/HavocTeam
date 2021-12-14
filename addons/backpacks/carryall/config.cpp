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
            QGVAR(Carryall_01_BLACK),
            QGVAR(Carryall_01_BLACK_MEDIC),
            QGVAR(Carryall_01_BW_D),
            QGVAR(Carryall_01_BW_D_MEDIC),
            QGVAR(Carryall_01_BW_W),
            QGVAR(Carryall_01_BW_W_MEDIC),
            QGVAR(Carryall_01_COYOTE),
            QGVAR(Carryall_01_COYOTE_MEDIC),
            QGVAR(Carryall_01_GREEN_DARK),
            QGVAR(Carryall_01_GREEN_DARK_MEDIC),
            QGVAR(Carryall_01_GREEN_DGTL),
            QGVAR(Carryall_01_GREEN_DGTL_MEDIC),
            QGVAR(Carryall_01_GREEN_RNGR),
            QGVAR(Carryall_01_GREEN_RNGR_MEDIC),
            QGVAR(Carryall_01_HEX_CAMO),
            QGVAR(Carryall_01_HEX_CAMO_MEDIC),
            QGVAR(Carryall_01_HEX_GREEN),
            QGVAR(Carryall_01_HEX_GREEN_MEDIC),
            QGVAR(Carryall_01_MARPAT_D),
            QGVAR(Carryall_01_MARPAT_D_MEDIC),
            QGVAR(Carryall_01_MARPAT_W),
            QGVAR(Carryall_01_MARPAT_W_MEDIC),
            QGVAR(Carryall_01_MTP),
            QGVAR(Carryall_01_MTP_MEDIC),
            QGVAR(Carryall_01_OCP),
            QGVAR(Carryall_01_OCP_MEDIC),
            QGVAR(Carryall_01_UCP),
            QGVAR(Carryall_01_UCP_MEDIC),
            QGVAR(Carryall_01_WDL),
            QGVAR(Carryall_01_WDL_MEDIC),
            QGVAR(Carryall_01_WDL2),
            QGVAR(Carryall_01_WDL2_MEDIC)
        };
        weapons[] = {};
        author = QAUTHOR;
        authors[] = {
            "O. Jemineh"
        };
        url = URL;

    };

};

#include "CfgVehicles.hpp"
