#include "script_component.hpp"

class CfgPatches {
    class ADDON {

        name = "HAVOC: Patrol";
        author = "Head";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"HAVOC_common"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "display3DEN.hpp"
#include "display3DENEditbox.hpp"
