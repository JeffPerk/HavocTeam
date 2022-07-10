
class GVAR(MorphineItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Havoc Morphine 10mg/1mL Ampoule";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(morphine) {
            name = QGVAR(morphine);
            count = 1;
        };
    };
};
class GVAR(epinephrineItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Havoc Adrenaline 1mg/1mL Ampoule";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(epinephrine) {
            name = QGVAR(epinephrine);
            count = 1;
        };
    };
};
class GVAR(fentanylItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Havoc Fentanyl 100mcg/2mL";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(fentanyl) {
            name = QGVAR(fentanyl);
            count = 1;
        };
    };
};

class GVAR(naloxonelItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Havoc Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(naloxone) {
            name = QGVAR(naloxone);
            count = 1;
        };
    };
};
class GVAR(ketamineItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Havoc Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(ketamine) {
            name = QGVAR(ketamine);
            count = 1;
        };
    };
};


class Leaflet_05_F;
class HAVOC_ApapLitter: Leaflet_05_F {
    hiddenSelectionsTextures[]= {
        "\z\havoc\addons\media\images\icon\apap_litter.paa"
    };
};

class GVAR(ApapItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Paracetemol 1g";
    icon="\z\havoc\addons\media\images\icon\apap.paa";
    model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(Apap) {
            name = QGVAR(Apap);
            count = 1;
        };
    };
};