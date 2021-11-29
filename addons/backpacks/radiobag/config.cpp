#include "..\script_component.hpp"

class CfgPatches {

    class HAVOC_Backpacks_RadioBag {
        name = COMPONENT_NAME;
        addonRootClass = "HAVOC_backpacks";
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_supplies_f_enoch_bags",
            "HAVOC_backpacks"
        };
        units[] = {
            QGVAR(RadioBag_01_BLACK),
            QGVAR(RadioBag_01_DIGI),
            QGVAR(RadioBag_01_EAF),
            QGVAR(RadioBag_01_GHEX),
            QGVAR(RadioBag_01_HEX),
            QGVAR(RadioBag_01_MTP),
            QGVAR(RadioBag_01_TROPIC),
            QGVAR(RadioBag_01_OUCAMO),
            QGVAR(RadioBag_01_WDL)
        };
        weapons[] = {};
        author = AUTHOR;
        authors[] = {
            "O. Jemineh"
        };
        url = URL;

    };

};

#include "CfgVehicles.hpp"
