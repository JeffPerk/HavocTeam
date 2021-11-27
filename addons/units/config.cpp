#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(helipilot),
            QGVAR(socom),
            QGVAR(socom_blk),
            QGVAR(socom_slv),
            QGVAR(socom_blu),
            QGVAR(socom_gld),
            QGVAR(socom_grn),
            QGVAR(socom_red)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = AUTHOR;
        authors[] = {"YonV"};
        url = URL;
        VERSION_CONFIG;
    };
};
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
