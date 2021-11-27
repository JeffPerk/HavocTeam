#include "script_component.hpp"
#include "base\config_crewanimation.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Arcadian_I_Black),
            QCLASS(Arcadian_B_Black),
            QCLASS(Arcadian_I_Tan),
            QCLASS(Arcadian_B_Tan),
            QCLASS(Arcadian_I_Green),
            QCLASS(Arcadian_B_Green),
            QCLASS(Arcadian_I_Grey),
            QCLASS(Arcadian_B_Grey),
            QCLASS(Arcadian_Armed_I_Black),
            QCLASS(Arcadian_Armed_B_Black),
            QCLASS(Arcadian_Armed_I_Tan),
            QCLASS(Arcadian_Armed_B_Tan),
            QCLASS(Arcadian_Armed_I_Green),
            QCLASS(Arcadian_Armed_B_Green),
            QCLASS(Arcadian_Armed_I_Grey),
            QCLASS(Arcadian_Armed_B_Grey)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_main"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };

    // Backwards compatibility
    class Arcadian: ADDON {author = "";}; // Component renamed in 1.20.0
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
