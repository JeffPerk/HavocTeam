#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a3_props_f_orange"
        };
        units[] = {
            "HAVOC_Item_FirstAid",
            "HAVOC_Item_MedicKit",
            "HAVOC_Item_DrugKit"
        };
        weapons[] = {
            "HAVOC_FirstAid",
            "HAVOC_MedicKit",
            "HAVOC_DrugKit"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
