#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    author = QAUTHOR;
    name = COMPONENT_NAME;
    url = URL;
    units[] = {
        QGVAR(Soldier_F),
        QGVAR(Scout_F),
        QGVAR(Ranger_F),
        QGVAR(SoldierD_F),
        QGVAR(ScoutD_F),
        QGVAR(SoldierMC_F),
        QGVAR(RunnerMC_F),
        QGVAR(ScoutMC_F),
        QGVAR(SoldierS_F),
        QGVAR(ScoutS_F),
        QGVAR(Sniper_F),
        QGVAR(B_Helipilot_F),
        QGVAR(SoldierMED_F),
        QGVAR(RunnerMED_F),
        QGVAR(ScoutMED_F),
        QGVAR(SoldierTROP_F),
        QGVAR(RunnerTROP_F),
        QGVAR(ScoutTROP_F),
        QGVAR(survival_diver_black),
        QGVAR(survival_diver_tigerstripe),
        QGVAR(survival_diver_woodland)
    };

    weapons[] = {
        QGVAR(U_CombatUniform),
        QGVAR(U_CombatUniform_shortsleeve),
        QGVAR(U_CombatUniform_ranger),
        QGVAR(U_CombatUniformD),
        QGVAR(U_CombatUniformD_shortsleeve),
        QGVAR(U_CombatUniformMC),
        QGVAR(U_CombatUniformMC_tshirt),
        QGVAR(U_CombatUniformMC_shortsleeve),
        QGVAR(U_CombatUniformSNOW),
        QGVAR(U_CombatUniformSNOW_shortsleeve),
        QGVAR(U_CombatUniformBlack),
        QGVAR(U_CombatUniformBlack_full),
        QGVAR(U_GhillieSuit),
        QGVAR(B_HeliPilotCoveralls),
        QGVAR(U_CombatUniform_wmed),
        QGVAR(U_CombatUniform_shortsleeve_wmed),
        QGVAR(U_CombatUniform_wtrop),
        QGVAR(U_CombatUniform_shortsleeve_wtrop),
        QGVAR(U_CombatUniform_mtp),
        QGVAR(U_CombatUniform_shortsleeve_mtp),
        QGVAR(U_CombatUniformMED),
        QGVAR(U_CombatUniformMED_tshirt),
        QGVAR(U_CombatUniformMED_shortsleeve),
        QGVAR(U_CombatUniformTROP),
        QGVAR(U_CombatUniformTROP_tshirt),
        QGVAR(U_CombatUniformTROP_shortsleeve),
        QGVAR(survival_uniform_black),
        QGVAR(survival_uniform_tigerstripe),
        QGVAR(survival_uniform_woodland)
    };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Characters_F_Beta",
        "A3_Characters_F",
        "A3_Characters_F_BLUFOR",
        "A3_Characters_F_Common"
    };
    VERSION_CONFIG;
  };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
