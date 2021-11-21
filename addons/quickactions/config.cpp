class CfgPatches
{
    class havoc_quickActions
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_common"
        };
        version = VERSION;
        versionStr = VERSION_STR;
        author = "diwako";
        url = URL;
    };
};

class Extended_PreInit_EventHandlers {
    class havoc_quickActions {
        init = "call compile preprocessFileLineNumbers 'z\havoc\addons\quickActions\functions\fn_preInit.sqf'";
    };
};

class Extended_InitPost_EventHandlers {
    class Helicopter {
        init = "[(_this select 0)] call havoc_quickActions_fnc_addFastRopeAction;";
    };
};

#include "cfgFunctions.hpp"
