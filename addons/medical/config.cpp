#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "havoc_MorphineItem",
            "havoc_epinephrineItem",
            "havoc_fentanylItem",
            "havoc_naloxonelItem",
            "havoc_ketamineItem",
            "havoc_ApapItem"
        };

        weapons[] = {
            "havoc_naloxone",
            "havoc_fentanyl",
            "havoc_ketamine",
            "havoc_ketamine_200mg",
            "havoc_tetra",
            "havoc_Apap",
            "havoc_VPN",
            "havoc_NDC"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_main",
            "ace_medical",
            "ace_medical_engine",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "kat_main",
            "kat_airway",
            "kat_breathing",
            "kat_circulation"
        };
        author = "";
        authors[] = {"havoc J4"};
        authorUrl = "https://havoc.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"

#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"

// #include "configs\ACE_Medical_Statemachine.hpp"
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
