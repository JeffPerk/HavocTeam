#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Havoc_Item_Vector_Designator",
            "Havoc_Item_optic_Nightstalker",
            "Havoc_Item_optic_AMS",
            "Havoc_Item_optic_AMS_khk",
            "Havoc_Item_optic_AMS_snd",
            "Havoc_Item_optic_AMSTI",
            "Havoc_Item_optic_AMSTI_khk",
            "Havoc_Item_optic_AMSTI_snd"
        };
        weapons[] = {
            "Havoc_Vector_Designator",
            "Havoc_optic_Nightstalker",
            "Havoc_optic_AMS_base",
            "Havoc_optic_AMS",
            "Havoc_optic_AMS_khk",
            "Havoc_optic_AMS_snd",
            "Havoc_optic_AMSTI_base",
            "Havoc_optic_AMSTI",
            "Havoc_optic_AMSTI_khk",
            "Havoc_optic_AMSTI_snd"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Havoc_main",
            "ace_vector",
            "A3_Weapons_F",
            "cba_jr"
        };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "jr_classes.hpp"
#include "RscInGameUI.hpp"
