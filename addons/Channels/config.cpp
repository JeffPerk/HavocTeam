#include "script_component.hpp"

class CfgPatches {
    class HAVOCFundamentals_Channels {

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

class Extended_PreInit_EventHandlers {
    class HAVOCFundamentals_Channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\havoc\addons\Channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class HAVOC_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\havoc\addons\Channels\XEH_postInit.sqf'";
    };
};