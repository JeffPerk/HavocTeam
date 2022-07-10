#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a3_props_f_orange"
        };
        units[] = {
            QGVAR(Item_FirstAid),
            QGVAR(Item_MedicKit),
            QGVAR(Item_DrugKit),
            QGVAR(Item_Trauma)
        };
        weapons[] = {
            QGVAR(FirstAid),
            QGVAR(MedicKit),
            QGVAR(DrugKit),
            QGVAR(Trauma)
        };
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
