class CfgVehicles {
    // Box
    class NATO_Box_Base {
        class EventHandlers;
    };
    class GVAR(HAVOC_resupply): NATO_Box_Base {
        scope = 2;
        author = QAUTHOR;
        mapSize=1.53;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.79000002;
            verticalOffsetWorld=0;
            init="[this,10,true,true] call havoc_fnc_AmmoCrate;";
        };
        displayName = "HAVOC Resupply";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        slingLoadCargoMemoryPoints[]=
        {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        class EventHandlers: EventHandlers
        {
        init = "[this,10,true,true] call havoc_fnc_AmmoCrate;";
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]=
        {
            "z\havoc\addons\Equipment\data\havoc_ammobox_signs_ca.paa",
            "z\havoc\addons\Equipment\data\havoc_ammo_co.paa",
        };
        class TransportMagazines
        {
        };
        class TransportWeapons
        {
        };
        class TransportItems
        {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };
    class GVAR(HAVOC_arsenal): NATO_Box_Base {
        scope = 2;
        author = QAUTHOR;
        mapSize=1.53;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.79000002;
            verticalOffsetWorld=0;
        };
        displayName = "HAVOC Arsenal";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_dragging_canDrag = 0; 
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]=
        {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        class EventHandlers: EventHandlers
        {
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]=
        {
            "z\havoc\addons\Equipment\data\havoc_ammobox_signs_caA.paa",
            "z\havoc\addons\Equipment\data\havoc_ammodpsoA_co.paa"
        };
        class TransportMagazines
        {
        };
        class TransportWeapons
        {
        };
        class TransportItems
        {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };

    class ACE_Item_Vector;

    class HAVOC_Item_Vector_Designator: ACE_Item_Vector {
        author = "NemessisRE";
        displayName = "[havoc] ACE Vector Designator (NVG/TI)";
        class TransportItems {
            class HAVOC_Vector_Designator {
                name="HAVOC_Vector_Designator";
                count=1;
            };
        };
    };

    class HAVOC_Item_Vector_Designator_NVG: HAVOC_Item_Vector_Designator {
        displayName = "[havoc] ACE Vector Designator (NVG)";
        class TransportItems {
            class HAVOC_Vector_Designator {
                name="HAVOC_Vector_Designator_NVG";
                count=1;
            };
        };
    };

    class Item_optic_Nightstalker;
    class HAVOC_Item_optic_Nightstalker: Item_optic_Nightstalker {
        displayName="[havoc] Nightstalker";
        author="NemesisRE";
        vehicleClass="WeaponAccessories";
        class TransportItems {
            class HAVOC_optic_Nightstalker {
                name="HAVOC_optic_Nightstalker";
                count=1;
            };
        };
    };

    class Item_optic_AMS;
    class HAVOC_Item_optic_AMS: Item_optic_AMS {
        displayName="[havoc] AMS (Black)";
        author="NemesisRE";
        class TransportItems {
            class HAVOC_optic_AMS {
                name="HAVOC_optic_AMS";
                count=1;
            };
        };
    };
    class HAVOC_Item_optic_AMS_khk: HAVOC_Item_optic_AMS {
        displayName="[havoc] AMS (Khaki)";
        class TransportItems {
            class HAVOC_optic_AMS_khk {
                name="HAVOC_optic_AMS_khk";
                count=1;
            };
        };
    };
    class HAVOC_Item_optic_AMS_snd: HAVOC_Item_optic_AMS {
        displayName="[havoc] AMS (Sand)";
        class TransportItems {
            class HAVOC_optic_AMS_snd {
                name="HAVOC_optic_AMS_snd";
                count=1;
            };
        };
    };
    class HAVOC_Item_optic_AMSTI: Item_optic_AMS {
        displayName="[havoc] AMS-TI (Black)";
        author="NemesisRE";
        class TransportItems {
            class HAVOC_optic_AMS {
                name="HAVOC_optic_AMSTI";
                count=1;
            };
        };
    };
    class HAVOC_Item_optic_AMSTI_khk: HAVOC_Item_optic_AMSTI {
        displayName="[havoc] AMS-TI (Khaki)";
        class TransportItems {
            class HAVOC_optic_AMS_khk {
                name="HAVOC_optic_AMSTI_khk";
                count=1;
            };
        };
    };
    class HAVOC_Item_optic_AMSTI_snd: HAVOC_Item_optic_AMSTI {
        displayName="[havoc] AMS-TI (Sand)";
        class TransportItems {
            class HAVOC_optic_AMS_snd {
                name="HAVOC_optic_AMSTI_snd";
                count=1;
            };
        };
    };

    class Box_NATO_Support_F;
    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            class HAVOC_Vector_Designator {
                name="HAVOC_Vector_Designator_NVG";
                count=3;
            };
        };
    };
};

