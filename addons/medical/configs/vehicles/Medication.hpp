    
class HAVOC_MorphineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Morphine 10mg/1mL Ampoule";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(HAVOC_morphine,1)
    };
};
class HAVOC_epinephrineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Adrenaline 1mg/1mL Ampoule";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(HAVOC_epinephrine,1)
    };
};
class HAVOC_fentanylItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Fentanyl 100mcg/2mL";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(HAVOC_fentanyl,1)
    };
};

class HAVOC_naloxonelItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(HAVOC_naloxone,1)
    };
};
class HAVOC_ketamineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(HAVOC_ketamine,1)
    };
};

class Leaflet_05_F;
class HAVOC_ApapLitter : Leaflet_05_F {
    hiddenSelectionsTextures[]= {
        "\z\havoc\addons\media\images\icon\apap_litter.paa"
    };
};

class HAVOC_ApapItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Paracetemol 1g";
    icon="\z\havoc\addons\media\images\icon\apap.paa";
    model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(HAVOC_Apap,1)
    };
};