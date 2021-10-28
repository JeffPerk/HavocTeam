#include "script_component.hpp"


class CfgPatches {

    class HAVOC_Interactions {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_common"
        };
        units[] = {};
        weapons[] = {};
        authors[] = {
            "O. Jemineh"
        };
        VERSION_CONFIG;
    };

};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"

#include "CfgActions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
