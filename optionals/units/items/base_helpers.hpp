class B_Soldier_base_F;
class B_Soldier_base_F { class EventHandlers; };


// Uniforms
#define MACRO_BASE_GVAR_COMMON \
    dlc = QUOTE(PREFIX); \
    scope = 0; \
    side = 2; \
    faction = QUOTE(PREFIX); \
    weapons[] = {"Throw", "Put"}; \
    respawnWeapons[] = {"Throw", "Put"}; \
    magazines[] = {}; \
    respawnMagazines[] = {}; \
    items[] = {"FirstAidKit"}; \
    respawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    modelSides[] = {6}; \
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"}; \
    genericNames = QUOTE(PREFIX); \
    class EventHandlers;

// Combat - Long Sleeves
class GVAR(Unit_Combat_LS_Base): B_Soldier_base_F {
    MACRO_BASE_GVAR_COMMON
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
};

// Combat - Long Sleeves - HAVOC
class GVAR(Unit_Combat_LS_HAVOC_Base): GVAR(Unit_Combat_LS_Base) {
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_HAVOC.rvmat)};
};

// Combat - Long Sleeves - Plaid
class GVAR(Unit_Combat_LS_C_Base): B_Soldier_base_F {
    MACRO_BASE_GVAR_COMMON
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_plaid.rvmat)};
};

// Combat - Rolled Sleeves
class B_Soldier_03_f;
class GVAR(Unit_Combat_RS_Base): B_Soldier_03_f {
    MACRO_BASE_GVAR_COMMON
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
};

// Combat - Rolled Sleeves - HAVOC
class GVAR(Unit_Combat_RS_HAVOC_Base): GVAR(Unit_Combat_RS_Base) {
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_HAVOC.rvmat)};
};

// Combat - Rolled Sleeves - Plaid
class GVAR(Unit_Combat_RS_C_Base): GVAR(Unit_Combat_RS_Base) {
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_plaid.rvmat)};
};

// Garment - Long Sleeves
class I_Soldier_base_F;
class GVAR(Unit_Garment_LS_Base): I_Soldier_base_F {
    MACRO_BASE_GVAR_COMMON
};

// Garment - Rolled Sleeves
class I_Soldier_02_F;
class GVAR(Unit_Garment_RS_Base): I_Soldier_02_F {
    MACRO_BASE_GVAR_COMMON
};

// Polo - Tactical Pants
class B_RangeMaster_F;
class GVAR(Unit_Polo_TP_Base): B_RangeMaster_F {
    MACRO_BASE_GVAR_COMMON
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_polo.rvmat)};
};

// Floral Shirts with Jeans
class GVAR(Unit_TShirt_Floral_Denim_Base): B_Soldier_base_F {
    MACRO_BASE_GVAR_COMMON
    model = "\A3\characters_f\Civil\c_poloshirtpants.p3d";
    hiddenSelectionsMaterials[] = {
        "\A3\characters_f\Civil\Data\c_poloshirtpants.rvmat"
    };
};

// Floral Shirts with Shorts
class GVAR(Unit_TShirt_Floral_Shorts_Base): B_Soldier_base_F {
    MACRO_BASE_GVAR_COMMON
    model = "\A3\characters_f\Civil\c_poloshirt.p3d";
    hiddenSelectionsMaterials[] = {
        "\A3\characters_f\Civil\Data\c_poloshirt.rvmat"
    };
};
