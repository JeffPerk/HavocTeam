#include "script_component.hpp"

class CfgPatches {
    class HAVOC_Interaction {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};
class CfgFunctions {

    #include "CfgFunctions.hpp"
};

class Extended_PreInit_EventHandlers {
    class HAVOCFundamentals_Interaction_Event {
        init = "call compile preprocessFileLineNumbers 'z\havoc\addons\Interaction\XEH_preInit.sqf'";
    };
};