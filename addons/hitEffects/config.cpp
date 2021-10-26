#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_main"};
        author[] = {"Brandon (TCVM)"};
        authorUrl = "https://github.com/BourbonWarfare/HAVOC";
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"
#include "impactEffects.hpp"
#include "CfgAmmo.hpp"
