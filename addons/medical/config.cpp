#include "script_component.hpp"


class CfgPatches {
    
    class HAVOC_Medical {
        name = "$STR_HAVOC_Medical_Title";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_common"
        };
        units[] = {};
        weapons[] = {};
        author = "$STR_HAVOC_Medical_Author";
        authors[] = {
            "O. Jemineh"
        };
        url = "$STR_HAVOC_Medical_URL";
        VERSION_CONFIG;
    };
    
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
