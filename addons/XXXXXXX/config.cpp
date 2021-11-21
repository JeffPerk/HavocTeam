#include "script_component.hpp"


class CfgPatches {
    
    class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_common",
            "ace_medical_treatment",
            "kat_main",
            "kat_airway",
            "kat_breathing",
            "kat_circulation"
        };
        units[] = {
            "HAVOC_MorphineItem",
            "HAVOC_epinephrineItem",
            "HAVOC_fentanylItem",
            "HAVOC_naloxonelItem",
            "HAVOC_ketamineItem",
            "HAVOC_ApapItem"
        };

        weapons[] = {
            "HAVOC_naloxone",
            "HAVOC_fentanyl",
            "HAVOC_ketamine",
            "HAVOC_ketamine_200mg",
            "HAVOC_tetra",
            "HAVOC_Apap",
            "HAVOC_VPN",
            "HAVOC_NDC"
        };
        author = "$STR_HAVOC_Medical_Author";
        authors[] = {
        };
        url = "$STR_HAVOC_Medical_URL";
        VERSION_CONFIG;
    };
    
};

#include "CfgEventHandlers.hpp"

#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"

#include "configs\ACE_Medical_Statemachine.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"

#include "configs\ZEN_Context_Actions.hpp"

class CfgFunctions
{
    class ace_medical_statemachine
    {
        tag = "ace_medical_statemachine";
        class Functions
        {
            class handleStateCardiacArrest{
                
            file="z\havoc\addons\medical\function_overwrites\fn_handleStateCardiacArrest.sqf";
            };
        };
    };
};
