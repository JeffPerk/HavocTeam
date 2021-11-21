#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "HAVOC: Chat commands";
        author = "Freddo";
        url = "http://www.teamonehavoctical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
