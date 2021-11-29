
class GVAR(MorphineItem): Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Havoc Morphine 10mg/1mL Ampoule";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        class GVAR(morphine) {
            name = GVAR(morphine);
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
            name = GVAR(epinephrine);
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
            name = GVAR(fentanyl);
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
            name = GVAR(naloxone);
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
            name = GVAR(ketamine);
            count = 1;
        };
    };
};
