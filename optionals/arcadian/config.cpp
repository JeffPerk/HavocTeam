#include "script_component.hpp"
#include "base\config_crewanimation.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Arcadian_I_Black),
            QGVAR(Arcadian_B_Black),
            QGVAR(Arcadian_I_Tan),
            QGVAR(Arcadian_B_Tan),
            QGVAR(Arcadian_I_Green),
            QGVAR(Arcadian_B_Green),
            QGVAR(Arcadian_I_Grey),
            QGVAR(Arcadian_B_Grey),
            QGVAR(Arcadian_Armed_I_Black),
            QGVAR(Arcadian_Armed_B_Black),
            QGVAR(Arcadian_Armed_I_Tan),
            QGVAR(Arcadian_Armed_B_Tan),
            QGVAR(Arcadian_Armed_I_Green),
            QGVAR(Arcadian_Armed_B_Green),
            QGVAR(Arcadian_Armed_I_Grey),
            QGVAR(Arcadian_Armed_B_Grey)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_main"};
        author = QAUTHOR;
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = URL;
        VERSION_CONFIG;
    };

    // Backwards compatibility
    class Arcadian: ADDON {author = "";}; // Component renamed in 1.20.0
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
