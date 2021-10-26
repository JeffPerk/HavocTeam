#include "script_component.hpp"

#ifndef HAVOC_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_main", "rhs_c_weapons"};
        author = "Havoc";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/HAVOC";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif
