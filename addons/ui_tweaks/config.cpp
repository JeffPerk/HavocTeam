#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Ui_F"};
        author = QAUTHOR;
        authors[] = {"Drofseh"};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "RscDisplay.hpp"
