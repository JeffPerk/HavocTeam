#include "script_component.hpp"

class CfgPatches {
    class Arcadian {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Arcadian_B_Black),
            QGVAR(Arcadian_B_Tan),
            QGVAR(Arcadian_B_Green)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_main", "CUP_Wheeled_SUV"};
        author = AUTHOR;
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
