#include "script_component.hpp"

class CfgPatches {
    class HAVOC_FOBs {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"Mokka"};
        weapons[] = {};
    };
};
class CfgFunctions {

    #include "CfgFunctions.hpp"
};

#include "CfgVehicles.hpp"