#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(MorphineItem),
            QGVAR(epinephrineItem),
            QGVAR(fentanylItem),
            QGVAR(naloxonelItem),
            QGVAR(ketamineItem),
            QGVAR(ApapItem)
        };

        weapons[] = {
            QGVAR(naloxone),
            QGVAR(fentanyl),
            QGVAR(ketamine),
            QGVAR(ketamine_200mg),
            QGVAR(tetra),
            QGVAR(Apap),
            QGVAR(VPN),
            QGVAR(NDC)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_main",
            "havoc_common",
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
        author = QAUTHOR;
        authors[] = {"havoc J4"};
        authorUrl = URL;
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


class CfgFunctions {
    class ace_medical_statemachine {
        tag = "ace_medical_statemachine";
        class Functions {
            class handleStateCardiacArrest {
                
            file="z\havoc\addons\medical\function_overwrites\fn_handleStateCardiacArrest.sqf";
            };
        };
    };
};
