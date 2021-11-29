#include "script_component.hpp"

class CfgPatches {
    class ADDON {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {
            QGVAR(Item_Vector_Designator),
            QGVAR(Item_optic_Nightstalker),
            QGVAR(Item_optic_AMS),
            QGVAR(Item_optic_AMS_khk),
            QGVAR(Item_optic_AMS_snd),
            QGVAR(Item_optic_AMSTI),
            QGVAR(Item_optic_AMSTI_khk),
            QGVAR(Item_optic_AMSTI_snd),
            QGVAR(vest_rebreather),
            QGVAR(Item_Wetsuit),
            QGVAR(diver_base_F)
        };
        weapons[] = {
            QGVAR(Vector_Designator),
            QGVAR(optic_Nightstalker),
            QGVAR(optic_AMS_base),
            QGVAR(optic_AMS),
            QGVAR(optic_AMS_khk),
            QGVAR(optic_AMS_snd),
            QGVAR(optic_AMSTI_base),
            QGVAR(optic_AMSTI),
            QGVAR(optic_AMSTI_khk),
            QGVAR(optic_AMSTI_snd),
            QGVAR(rebreather),
            QGVAR(Wetsuit)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "ace_vector",
            "A3_Weapons_F",
            "cba_jr"
        };
        version = VERSION;
        authors[] = {"MitchJC"};
    };
};

class CfgFunctions {
    #include "CfgFunctions.hpp"
};

#include "Cfg3DEN.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "jr_classes.hpp"
#include "RscInGameUI.hpp"
#include "CfgEventHandlers.hpp"

class Extended_InitPost_EventHandlers {
    class ReammoBox_F {
        class Storage_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Storage_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
    class Car {
        class Car_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Car_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
    class Tank {
        class Tank_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Tank_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
    class Motorcycle {
        class Motorcycle_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Motorcycle_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
    class Helicopter {
        class Helicopter_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Helicopter_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
    class Plane {
        class Plane_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Plane_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
    class Ship_F {
        class Ship_MedicalSupplies {
            init = "[_this select 0] call havoc_fnc_MedicalSupplies";
        };
        class Ship_Ammobox {
            init = "[_this select 0] call havoc_fnc_Ammobox";
        };
    };
};