#include "..\script_component.hpp"
class CfgPatches {
  class havocackpack {
    units[] = {
      QCLASS(Kitbag_m98),
      QCLASS(Kitbag_m98_medic),
      QCLASS(AssaultPack_m98),
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
  class CLASS(Kitbag_m98): B_kitBag_rgr {
    author = AUTHOR;
    displayName = "[Havoc] Kitbag (M98)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpack\data\texture\kitbag_m98.paa)};
  };
  class CLASS(AssaultPack_m98): B_AssaultPack_rgr {
    author = AUTHOR;
    displayName = "[Havoc] Assault Pack (M98)";
    hiddenSelectionsTextures[] = {QPATHTOF(backpack\data\texture\assault_m98.paa)};
  };
  // Medic
  class CLASS(Kitbag_m98_medic): B_kitBag_rgr {
    author = AUTHOR;
    displayName = "[Havoc] Kitbag (M98) [Medic]";
    hiddenSelectionsTextures[] = {QPATHTOF(backpack\data\texture\kitbag_m98_medic.paa)};
  };
};
