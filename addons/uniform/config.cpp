#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    units[] = {
        QCLASS(Soldier_F),
        QCLASS(Scout_F),
        QCLASS(Ranger_F),
        QCLASS(SoldierD_F),
        QCLASS(ScoutD_F),
        QCLASS(SoldierMC_F),
        QCLASS(RunnerMC_F),
        QCLASS(ScoutMC_F),
        QCLASS(SoldierS_F),
        QCLASS(ScoutS_F),
        QCLASS(Sniper_F),
        QCLASS(B_Helipilot_F),
        QCLASS(SoldierMED_F),
        QCLASS(RunnerMED_F),
        QCLASS(ScoutMED_F),
        QCLASS(SoldierTROP_F),
        QCLASS(RunnerTROP_F),
        QCLASS(ScoutTROP_F),
        QCLASS(survival_diver_black),
        QCLASS(survival_diver_tigerstripe),
        QCLASS(survival_diver_woodland)
    };

    weapons[] = {
        QCLASS(U_CombatUniform),
        QCLASS(U_CombatUniform_shortsleeve),
        QCLASS(U_CombatUniform_ranger),
        QCLASS(U_CombatUniformD),
        QCLASS(U_CombatUniformD_shortsleeve),
        QCLASS(U_CombatUniformMC),
        QCLASS(U_CombatUniformMC_tshirt),
        QCLASS(U_CombatUniformMC_shortsleeve),
        QCLASS(U_CombatUniformSNOW),
        QCLASS(U_CombatUniformSNOW_shortsleeve),
        QCLASS(U_CombatUniformBlack),
        QCLASS(U_CombatUniformBlack_full),
        QCLASS(U_GhillieSuit),
        QCLASS(B_HeliPilotCoveralls),
        QCLASS(U_CombatUniform_wmed),
        QCLASS(U_CombatUniform_shortsleeve_wmed),
        QCLASS(U_CombatUniform_wtrop),
        QCLASS(U_CombatUniform_shortsleeve_wtrop),
        QCLASS(U_CombatUniform_mtp),
        QCLASS(U_CombatUniform_shortsleeve_mtp),
        QCLASS(U_CombatUniformMED),
        QCLASS(U_CombatUniformMED_tshirt),
        QCLASS(U_CombatUniformMED_shortsleeve),
        QCLASS(U_CombatUniformTROP),
        QCLASS(U_CombatUniformTROP_tshirt),
        QCLASS(U_CombatUniformTROP_shortsleeve),
        QCLASS(survival_uniform_black),
        QCLASS(survival_uniform_tigerstripe),
        QCLASS(survival_uniform_woodland)
    };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Characters_F_Beta",
        "A3_Characters_F",
        "A3_Characters_F_BLUFOR",
        "A3_Characters_F_Common"
    };
    version = "1.31";
    versionStr = "1.31";
    author = AUTHOR;

  };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
