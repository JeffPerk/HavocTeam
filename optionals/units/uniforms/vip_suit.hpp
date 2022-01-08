class GVAR(Suit_VIP): GVAR(Uniform_Base) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Suit_VIP);
    picture = QPATHTOF(UI\suit_vip.paa);

    class ItemInfo: ItemInfo {
        containerClass = "Supply10";
        mass = 20;
        uniformClass = QGVAR(Unit_I_VIP);
    };
};
