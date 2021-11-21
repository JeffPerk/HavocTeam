#include "script_component.hpp"

class CfgPatches
{
    class HAVOC_AI
    {
        author = AUTHOR;
        name = NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "cba_xeh"
        };
        version = VERSION;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"

class CfgFunctions {

    #include "CfgFunctions.hpp"
};

class Extended_PreInit_EventHandlers
{
    class HAVOC_AI_Event
    {
        init = "call compile preProcessFileLineNumbers 'z\havoc\addons\AI\XEH_preInit.sqf'";
    };
};