#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_main"
        };
        author = "Havoc";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "adminWhitelist.hpp"
