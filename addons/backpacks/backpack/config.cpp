#include "..\script_component.hpp"
class CfgPatches {
  class havocackpack {
    units[] = {
      QGVAR(Kitbag_m98),
      QGVAR(Kitbag_m98_medic),
      QGVAR(AssaultPack_m98),
    };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredaddons[] = {
        "A3_Characters_F_Beta",
        "A3_Characters_F",
        "A3_Characters_F_BLUFOR"
    };
  };
};

class CfgVehicles {
  class B_kitBag_rgr;
  class B_AssaultPack_rgr;
  class B_Carryall_oli;
  // M98
  class GVAR(Kitbag_m98): B_kitBag_rgr {
    author = AUTHOR;
    displayName = "[Havoc] Kitbag (M98)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpack\data\texture\kitbag_m98.paa)};
  };
  class GVAR(AssaultPack_m98): B_AssaultPack_rgr {
    author = AUTHOR;
    displayName = "[Havoc] Assault Pack (M98)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpack\data\texture\assault_m98.paa)};
  };
  // Medic
  class GVAR(Kitbag_m98_medic): B_kitBag_rgr {
    author = AUTHOR;
    displayName = "[Havoc] Kitbag (M98) [Medic]";
    hiddenSelectionsTextures[] = {QPATHTOF(backpack\data\texture\kitbag_m98_medic.paa)};
  };
};
