#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(helipilot),
            QGVAR(socom),
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
