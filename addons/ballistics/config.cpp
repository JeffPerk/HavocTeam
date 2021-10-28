#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_main"};
        author = QAUTHOR;
        authors[] = {"BaerMitUmlaut", "Jonpas"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
