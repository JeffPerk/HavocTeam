#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_main",
            "havoc_debug_console"
        };
        author = "Havoc";
        VERSION_CONFIG;
    };
};


#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"
