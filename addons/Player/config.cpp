#include "script_component.hpp"

class CfgPatches
{
    class HAVOC_Player
    {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        version = VERSION;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "Cfg3DEN.hpp"

class CfgFunctions {
    #include "cfgFunctions.hpp"
};

