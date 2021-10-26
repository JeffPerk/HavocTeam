#include "script_component.hpp"

class CfgPatches
{
    class HAVOC_Media
    {
        author = AUTHOR;
         name = COMPONENT_NAME;
        url = URL;
        units[] = {"HAVOC_Flag_White", "HAVOC_Flag_Black"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        version = VERSION;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgMusic.hpp"
#include "CfgRadio.hpp"
#include "CfgSounds.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgEventHandlers.hpp"

