#include "script_component.hpp"



class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "havoc_main"
        };
        units[] = {};
        weapons[] = {};
        authors[] = {
            "YonV"
        };
        version = VERSION;
    };
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    class vtx_MH60M;
    class vtx_MH60M_DAP;
    class GVAR(uh60M): vtx_MH60M {
        scope=2;
        hiddenSelectionsTextures[]= {
            "",  //DNU (Do not Use)
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "\z\havoc\addons\helicopters\data\Hull_Main_havoc.paa",
            "\z\havoc\addons\helicopters\data\Misc_havoc.paa",
            "\z\havoc\addons\helicopters\data\Hull_Tail_havoc.paa",
            "", //Markings
            "", //left_num_1
            "", //left_num_2
            "", //right_num_1
            "", //right_num_2
            "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa" //Fuel Probe
        };
        displayName="[Havoc] MH60M";
    };
    class GVAR(uh60M_dap): vtx_MH60M_DAP {
        scope=2;
        hiddenSelectionsTextures[]= {
            "",  //DNU (Do not Use)
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "\z\havoc\addons\helicopters\data\Hull_Main_havoc.paa",
            "\z\havoc\addons\helicopters\data\Misc_havoc.paa",
            "\z\havoc\addons\helicopters\data\Hull_Tail_havoc.paa",
            "", //Markings
            "", //left_num_1
            "", //left_num_2
            "", //right_num_1
            "", //right_num_2
            "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa" //Fuel Probe
        };
        displayName="[Havoc] MH60M DAP";
    };
    class GVAR(uh60M_med): vtx_MH60M {
        scope=2;
        hiddenSelectionsTextures[]= {
            "",  //DNU (Do not Use)
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "\z\havoc\addons\helicopters\data\Hull_Main_havoc_med.paa",
            "\z\havoc\addons\helicopters\data\Misc_havoc.paa",
            "\z\havoc\addons\helicopters\data\Hull_Tail_havoc_med.paa",
            "", //Markings
            "", //left_num_1
            "", //left_num_2
            "", //right_num_1
            "", //right_num_2
            "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa" //Fuel Probe
        };
        displayName="[Havoc] MH60M Med";
        init = "this setVariable ['ace_medical_medicClass',1];";
        class EventHandlers {
            init = "this setVariable ['ace_medical_medicClass',1];";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class B_Heli_Transport_03_unarmed_F;
    class GVAR(B_Heli_Medevac_031_F): B_Heli_Transport_03_unarmed_F {
        author = AUTHOR;
        _generalMacro="Heli_Transport_03_base_F";
        displayName="Huron MedEvac (Unarmed)"; /// how is the heli displayed in editor
        vehicleClass = "Air";
        faction = QUOTE(PREFIX);
        crew="B_Helipilot_F";
        typicalCargo[]= {
            "B_Soldier_F"
        };
        side=1;
        scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        attendant=1;
        armor = 500;
        crewCrashProtection = 0.03;
        pilotLight = false;
        icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa"; /// icon in map/editor
        picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa"; /// small picture in command menu
        threat[]={.2,.2,.2};
        soundEngine[] = {"",.7,.7};
        irTarget = false;
        init = "this setVehicleTIPars [0, 0, 0];";
        class EventHandlers {
            init = "this setVariable ['ace_medical_medicClass',1];";
            init = "this setVehicleTIPars [0, 0, 0];";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\Heli_Transport_03_ext01_md.paa),
            QPATHTOF(data\Heli_Transport_03_ext02_md.paa)
        };
        textureList[]= {
            "med1",
            1
        };
    };
    class GVAR(B_Heli_Medevac_03daz_F): B_Heli_Transport_03_unarmed_F {
            author = AUTHOR;
            _generalMacro="Heli_Transport_03_base_F";
            displayName="Huron MedEvac (Sand Unarmed)"; /// how is the heli displayed in editor
            vehicleClass = "Air";
            faction = QUOTE(PREFIX);
            crew="B_Helipilot_F";
            typicalCargo[]= {
                "B_Soldier_F"
            };
            side=1;
            scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
//            scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
            attendant=1;
            armor = 500;
            crewCrashProtection = 0.03;
            pilotLight = false;
            icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa"; /// icon in map/editor
            picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa"; /// small picture in command menu
            threat[]={.2,.2,.2};
            soundEngine[] = {"",.7,.7};
            irTarget = false;
            init = "this setVehicleTIPars [0, 0, 0];";
            class EventHandlers {
                init = "this setVehicleTIPars [0, 0, 0];";
                init = "this setVariable ['ace_medical_medicClass',1];";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
            hiddenSelectionsTextures[]= {
                QPATHTOF(data\Heli_Transport_03_ext01_daz_med.paa),
                QPATHTOF(data\Heli_Transport_03_ext02_daz_med.paa)
            };
            textureList[]= {
                "med1",
                1
            };
    };


    class GVAR(B_Heli_Medevac_03dazt_F): B_Heli_Transport_03_unarmed_F {
            author = AUTHOR;
            _generalMacro="Heli_Transport_03_base_F";
            displayName="Huron MedEvac (Tropic Unarmed)"; /// how is the heli displayed in editor
            vehicleClass = "Air";
            faction = QUOTE(PREFIX);
            crew="B_Helipilot_F";
            typicalCargo[]= {
                "B_Soldier_F"
            };
            side=1;
            scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
//            scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
            attendant=1;
            armor = 500;
            crewCrashProtection = 0.03;
            pilotLight = false;
            icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa"; /// icon in map/editor
            picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa"; /// small picture in command menu
            threat[]={.2,.2,.2};
            soundEngine[] = {"",.7,.7};
            irTarget = false;
            init = "this setVehicleTIPars [0, 0, 0];";
            class EventHandlers {

                init = "this setVariable ['ace_medical_medicClass',1];";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
            hiddenSelectionsTextures[]= {

                QPATHTOF(data\Heli_Transport_03_ext01_dazt_med.paa),
                QPATHTOF(data\Heli_Transport_03_ext02_dazt_med.paa)
            };
            textureList[]= {
                "med1",
                1
            };
    };

        ////////////////////////////////////////////////////////
    class B_Heli_Transport_03_F;
    class GVAR(B_Heli__03daz_F): B_Heli_Transport_03_F {
            author = AUTHOR;
            _generalMacro="Heli_Transport_03_base_F";
            displayName="Huron (Sand)"; /// how is the heli displayed in editor
            vehicleClass = "Air";
            faction = QUOTE(PREFIX);
            crew="B_Helipilot_F";
            typicalCargo[]= {
                "B_Soldier_F"
            };
            side=1;
            scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
//            scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
            attendant=1;
            armor = 500;
            crewCrashProtection = 0.03;
            pilotLight = false;
            icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa"; /// icon in map/editor
            picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa"; /// small picture in command menu
            threat[]={.2,.2,.2};
            soundEngine[] = {"",.7,.7};
            irTarget = false;
            init = "this setVehicleTIPars [0, 0, 0];";
            class EventHandlers {
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
            hiddenSelectionsTextures[]= {
                QPATHTOF(data\Heli_Transport_03_ext01_md_med.paa),
                QPATHTOF(data\Heli_Transport_03_ext02_md_med.paa)
            };
            textureList[]= {
                "med1",
                1
            };
    };
    class GVAR(B_Heli__03dazt_F): B_Heli_Transport_03_F {
            author = AUTHOR;
            _generalMacro="Heli_Transport_03_base_F";
            displayName="Huron (Tropic)"; /// how is the heli displayed in editor
            vehicleClass = "Air";
            faction = QUOTE(PREFIX);
            crew="B_Helipilot_F";
            typicalCargo[]= {
                "B_Soldier_F"
            };
            side=1;
            scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
//            scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
            attendant=1;
            armor = 500;
            crewCrashProtection = 0.03;
            pilotLight = false;
            icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa"; /// icon in map/editor
            picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa"; /// small picture in command menu
            threat[]={.2,.2,.2};
            soundEngine[] = {"",.7,.7};
            irTarget = false;
            init = "this setVehicleTIPars [0, 0, 0];";
            class EventHandlers {
                init = "this setVehicleTIPars [0, 0, 0];";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
            hiddenSelectionsTextures[]= {
                QPATHTOF(data\Heli_Transport_03_ext01_md_trp.paa),
                QPATHTOF(data\Heli_Transport_03_ext02_md_trp.paa)
            };
            textureList[]= {
                "med1",
                1
            };
    };


        ///////////////////////////////////////////////////////////////////

    class B_Heli_Transport_01_F;
    class GVAR(B_Heli_Transport_01_F_Sand): B_Heli_Transport_01_F {
            author = AUTHOR;
            _generalMacro="B_Heli_Transport_01_F";
            displayName="GhostHawk(Sand)"; /// how is the heli displayed in editor
            vehicleClass = "Air";
            faction = QUOTE(PREFIX);
            crew="B_Helipilot_F";
            typicalCargo[]= {
                "B_Soldier_F"
            };
            side=1;
            scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
//            scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
            attendant=1;
            armor = 400;
            audible = 30;
            camouflage = 80;
            radarTargetSize = 0.1;
            lockDetectionSystem = "8 + 4 + 2";
            maxSpeed = 400;
            crewCrashProtection = 0.03;
            pilotLight = false;
            threat[]={.2,.2,.2};
            soundEngine[] = {"",.5,.5};
            irTarget = 1;
            irTargetSize = 0.1;
            laserTarget = 0;
            nvScanner = 1;
            nvTarget = 0;
            showAllTargets = 2;
            visualTargetSize = 0.1;
            init = "this setVehicleTIPars [0, 0, 0];";
            class EventHandlers {
                init = "this setVehicleTIPars [0, 0, 0];";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
            hiddenSelectionsTextures[]= {
                QPATHTOF(data\heli_transport_01_ext01_sand_co_hvt.paa),
                QPATHTOF(data\heli_transport_01_ext02_sand_co_hvt.paa)
            };
            textureList[]= {
                "sand1",
                1
            };
    };
    class GVAR(B_Heli_Transport_01_F_Tropic): B_Heli_Transport_01_F {
        author = AUTHOR;
        _generalMacro="B_Heli_Transport_01_F";
        displayName="GhostHawk(Tropic)"; /// how is the heli displayed in editor
        vehicleClass = "Air";
        faction = QUOTE(PREFIX);
        crew="B_Helipilot_F";
        typicalCargo[]= {
            "B_Soldier_F"
        };
        side=1;
        scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        attendant=1;
        armor = 400;
        audible = 30;
        camouflage = 80;
        radarTargetSize = 0.1;
        lockDetectionSystem = "8 + 4 + 2";
        maxSpeed = 400;
        crewCrashProtection = 0.03;
        pilotLight = false;
        threat[]={.2,.2,.2};
        soundEngine[] = {"",.5,.5};
        irTarget = 1;
        irTargetSize = 0.1;
        laserTarget = 0;
        nvScanner = 1;
        nvTarget = 0;
        showAllTargets = 2;
        visualTargetSize = 0.1;
        init = "this setVehicleTIPars [0, 0, 0];";
        class EventHandlers {
            init = "this setVehicleTIPars [0, 0, 0];";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\heli_transport_01_ext01_tropic_co_hvt.paa),
            QPATHTOF(data\heli_transport_01_ext02_tropic_co_hvt.paa)
        };
        textureList[]= {
            "sand1",
            1
        };
    };
        ///////////////////////////////////////////////////////////////////
/*
    class FIR_UH80R;
    class GVAR(uh80_F_Sand): FIR_UH80R {

            author = AUTHOR;
            _generalMacro="FIR_UH80R";
            displayName="GhostHawk UH80R (Sand)"; /// how is the heli displayed in editor
            vehicleClass = "Air";
            faction = QUOTE(PREFIX);
            crew="B_Helipilot_F";
            typicalCargo[]= {

                "B_Soldier_F"
            };
            side=1;
            scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
//            scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
            attendant=1;
            armor = 250;
            audible = 30;
            radarTargetSize = 0.55;
            maxSpeed = 360;
            crewCrashProtection = 0.03;
            pilotLight = false;
            threat[]={.2,.2,.2};
        soundEngine[] = {"",.7,.7};
            irTarget = false;
            class EventHandlers {

                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
            hiddenSelectionsTextures[]= {

                QPATHTOF(data\heli_transport_01_ext01_sand_co_havoc_cow.paa),
                QPATHTOF(data\heli_transport_01_ext02_sand_co_havoc_cow.paa)
            };
            textureList[]= {

                "sand1",
                1
            };
        };
    class GVAR(uh80_F_Tropic): FIR_UH80R {

        author = AUTHOR;
        _generalMacro="FIR_UH80R";
        displayName="GhostHawk UH80R(Tropic)"; /// how is the heli displayed in editor
        vehicleClass = "Air";
        faction = QUOTE(PREFIX);
        crew="B_Helipilot_F";
        typicalCargo[]= {

            "B_Soldier_F"
        };
        side=1;
        scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        attendant=1;
        armor = 250;
        audible = 30;
        radarTargetSize = 0.55;
        maxSpeed = 360;
        crewCrashProtection = 0.03;
        pilotLight = false;
        threat[]={.2,.2,.2};
        soundEngine[] = {"",.7,.7};
        irTarget = false;
        class EventHandlers {

            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
        hiddenSelectionsTextures[]= {

            QPATHTOF(data\heli_transport_01_ext01_tropic_co_havoc_cow.paa),
            QPATHTOF(data\heli_transport_01_ext02_tropic_co_havoc_cow.paa)
        };
        textureList[]= {

            "sand1",
            1
        };
    };
 */
    ////////////////////////////////
    class GVAR(B_Heli_Transport_01_F_medic): B_Heli_Transport_01_F {
        author = AUTHOR;
        _generalMacro="B_Heli_Transport_01_F";
        displayName="GhostHawk(MedEvac)"; /// how is the heli displayed in editor
        vehicleClass = "Air";
        faction = QUOTE(PREFIX);
        crew="B_Helipilot_F";
        typicalCargo[]= {
            "B_Soldier_F"
        };
        side=1;
        scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        attendant=1;
        armor = 400;
        audible = 30;
        camouflage = 80;
        radarTargetSize = 0.1;
        lockDetectionSystem = "8 + 4 + 2";
        maxSpeed = 400;
        crewCrashProtection = 0.03;
        pilotLight = false;
        threat[]={.2,.2,.2};
        soundEngine[] = {"",.5,.5};
        irTarget = 1;
        irTargetSize = 0.1;
        laserTarget = 0;
        nvScanner = 1;
        nvTarget = 0;
        showAllTargets = 2;
        visualTargetSize = 0.1;
        init = "this setVehicleTIPars [0, 0, 0];";
        class EventHandlers {
                init = "this setVariable ['ace_medical_medicClass',1];";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };

        hiddenSelectionsTextures[]= {

            QPATHTOF(data\heli_medevac_01b_ext_co.paa),
            QPATHTOF(data\heli_medevac_01_ext02_co.paa)
        };
        textureList[]= {

            "sand1",
            1
        };
    };
    ////////////////////////////////
    class B_Heli_Light_01_F;
    class GVAR(mh6): B_Heli_Light_01_F {
        author = AUTHOR;
        _generalMacro="B_Heli_Light_01_F";
        displayName="havoc MH-6"; /// how is the heli displayed in editor
        vehicleClass = "Air";
        faction = QUOTE(PREFIX);
        crew="B_Helipilot_F";
        typicalCargo[]= {
            "B_Soldier_F"
        };
        side=1;
        scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        attendant=1;
        weapons[] = {"CMFlareLauncher"};
        magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\heli_light_01_ext_hvt_co.paa)
        };

    };

    class B_Heli_Light_01_armed_F;
    class GVAR(ah6): B_Heli_Light_01_armed_F {
        author = AUTHOR;
        _generalMacro="B_Heli_Light_01_armed_F";
        displayName="havoc AH-6"; /// how is the heli displayed in editor
        vehicleClass = "Air";
        faction = QUOTE(PREFIX);
        crew="B_Helipilot_F";
        typicalCargo[]= {
            "B_Soldier_F"
        };
        side=1;
        scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        attendant=1;
        weapons[] = {"M134_minigun","missiles_DAR","CMFlareLauncher"};
        magazines[] = {"5000Rnd_762x51_Belt","24Rnd_missiles","168Rnd_CMFlare_Chaff_Magazine"};
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\heli_light_01_ext_hvt_co.paa),
            "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"
        };
    };

};
