#include "script_component.hpp"
class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class B_Soldier_base_F;
    
    class B_Soldier_base_F { class EventHandlers; };


    class GVAR(helipilot): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative";
        displayName = "Pilot";
        uniformClass = "havoc_B_HeliPilotCoveralls";
        backpack = "";
        weapons[] = {"havoc_MXC_blackcamo", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier1_Greengry", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemGPS", "", "", "", "", "", "", "", ""};
    };   

    class GVAR(socom): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greencmd", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 
////////////////////////////////////////////////////////////////////////

    class GVAR(socom_blk): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher Black Squadron";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greenblk", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 


    class GVAR(socom_slv): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher Silver Squadron";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greenslv", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 


    class GVAR(socom_blu): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher Blue Squadron";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greenblu", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 
    class GVAR(socom_gld): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher Gold Squadron";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greengld", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 

    class GVAR(socom_grn): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher Bolo Squadron";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greengrn", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 

    class GVAR(socom_red): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        side = 1;
        faction = QUOTE(PREFIX);
        show = "true";
        role = "SpecialOperative"; 
        displayName = "Breacher Red Squadron";
        items[] = {"ACE_MapTools","HAVOC_FirstAid","ACE_EarPlugs"};
        uniformClass = "havoc_U_CombatUniformMC";
        backpack = "";
        weapons[] = {"havoc_MX_BlackCamo_ACO", "havoc_hgun_P07_blk_F", "Binocular", "Throw", "Put"};
        magazines[] = {"havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag", "havoc_30Rnd_65x39_caseless_BlackCamo_mag"};
        items[] = {"HAVOC_FirstAid", "ACE_EarPlugs", "ACE_MapTools"};
        linkedItems[] = {"havoc_Item_Vest_PlateCarrier2_Greenred", "havoc_Cap_Earpiece_BlackLogo", "G_Shades_Green", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str", "ItemGPS", "", "", "optic_Aco", "", "", "", "", ""};
    }; 
};