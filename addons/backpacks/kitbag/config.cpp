#include "..\script_component.hpp"

class CfgPatches {

    class GVAR(Backpacks_Kitbag) {
         name = COMPONENT_NAME;
        addonRootClass = "HAVOC_backpacks";
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_weapons_f_ammoboxes",
            "HAVOC_backpacks"
        };
        units[] = {
            QGVAR(Kitbag_01_BLACK),
            QGVAR(Kitbag_01_BLACK_MEDIC),
            QGVAR(Kitbag_01_BW_D),
            QGVAR(Kitbag_01_BW_D_MEDIC),
            QGVAR(Kitbag_01_BW_W),
            QGVAR(Kitbag_01_BW_W_MEDIC),
            QGVAR(Kitbag_01_COYOTE),
            QGVAR(Kitbag_01_COYOTE_MEDIC),
            QGVAR(Kitbag_01_GREEN_DARK),
            QGVAR(Kitbag_01_GREEN_DARK_MEDIC),
            QGVAR(Kitbag_01_GREEN_DGTL),
            QGVAR(Kitbag_01_GREEN_DGTL_MEDIC),
            QGVAR(Kitbag_01_GREEN_RNGR),
            QGVAR(Kitbag_01_GREEN_RNGR_MEDIC),
            QGVAR(Kitbag_01_HEX_CAMO),
            QGVAR(Kitbag_01_HEX_CAMO_MEDIC),
            QGVAR(Kitbag_01_HEX_GREEN),
            QGVAR(Kitbag_01_HEX_GREEN_MEDIC),
            QGVAR(Kitbag_01_MARPAT_D),
            QGVAR(Kitbag_01_MARPAT_D_MEDIC),
            QGVAR(Kitbag_01_MARPAT_W),
            QGVAR(Kitbag_01_MARPAT_W_MEDIC),
            QGVAR(Kitbag_01_MTP),
            QGVAR(Kitbag_01_MTP_MEDIC),
            QGVAR(Kitbag_01_OCP),
            QGVAR(Kitbag_01_OCP_MEDIC),
            QGVAR(Kitbag_01_UCP),
            QGVAR(Kitbag_01_UCP_MEDIC),
            QGVAR(Kitbag_01_WDL),
            QGVAR(Kitbag_01_WDL_MEDIC)
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
