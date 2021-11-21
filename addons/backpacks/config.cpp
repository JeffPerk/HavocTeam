#include "script_component.hpp"


class CfgPatches {

    class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_weapons_f",
            "HAVOC_MAIN",
            "A3_Supplies_F_Enoch_Bags"
        };
        units[] = {};
        weapons[] = {};
        author = AUTHOR;
        authors[] = {
            "O. Jemineh"
        };
        url = URL;

    };

};
