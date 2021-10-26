#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_common"
        };
        author = "Havoc";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgRespawnTemplates.hpp"
