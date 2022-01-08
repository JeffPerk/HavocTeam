// Naming pattern: TypeSleevesOrPants_ColorShirt_ColorPants_ColorBoots
// Polo - Cord Pants
class GVAR(Uniform_Polo_CP_LS_TP_OB): GVAR(Uniform_Base) { // O = Brown
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Uniform_Polo_CP_LS_TP_OB);
    picture = QPATHTOF(UI\uniform_polo_cp_ls_tp_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QGVAR(Unit_Polo_CP_LS_TP_OB);
    };
};
class GVAR(Uniform_Polo_CP_RS_LP_BB): GVAR(Uniform_Base) { // L = Blue
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Uniform_Polo_CP_RS_LP_BB);
    picture = QPATHTOF(UI\uniform_polo_cp_rs_lp_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QGVAR(Unit_Polo_CP_RS_LP_BB);
    };
};
class GVAR(Uniform_Polo_CP_BS_TP_BB): GVAR(Uniform_Base) {
    scope = 2;
    author = "Pomigit, Jonpas, Rory";
    displayName = CSTRING(Uniform_Polo_CP_BS_TP_BB);
    picture = QPATHTOF(UI\uniform_polo_cp_bs_tp_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QGVAR(Unit_Polo_CP_BS_TP_BB);
    };
};
class GVAR(Uniform_Polo_CP_BS_TP_BB_NoLogo): GVAR(Uniform_Base) {
    scope = 2;
    author = "Pomigit, Jonpas, Kresky";
    displayName = CSTRING(Uniform_Polo_CP_BS_TP_BB_NoLogo);
    picture = QPATHTOF(UI\uniform_polo_cp_bs_tp_nologo_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QGVAR(Unit_Polo_CP_BS_TP_BB_NoLogo);
    };
};
