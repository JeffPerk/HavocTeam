#include "script_component.hpp"
class cfgVehicles {
    class B_soldier_F;
    class I_Sniper_F;
    class B_Helipilot_F;
    class man;
    class I_G_Story_Protagonist_F;
    class b_soldier_survival_F;


    // Woodland M98
    class GVAR(Soldier_F): B_soldier_F {
        scope = 1;
        author = AUTHOR;
        side = 1;
        displayName = "[Havoc] Rifleman [M98]";
        uniformClass =QGVAR(U_CombatUniform);
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_m98.paa)
        };
    };
    class GVAR(Scout_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [M98] (Rolled-up)";
        uniformClass =QGVAR(U_CombatUniform_shortsleeve);
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    };
    class GVAR(Ranger_F): GVAR(Scout_F) {
        displayName = "[Havoc] Rifleman [M98] (Ranger)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_m98_ranger.paa)
        };
    };

    // med
    class GVAR(SoldierMED_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [Mediterranean]";
        uniformClass =QGVAR(U_CombatUniformMC);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\havoc_mtp_clothing1_co.paa)
        };
    };
    class GVAR(RunnerMED_F): GVAR(SoldierMED_F) {
        displayName = "[Havoc] Rifleman [Mediterranean] (T-shirt)";
        uniformClass =QGVAR(U_CombatUniformMC_tshirt);
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };
    class GVAR(ScoutMED_F): GVAR(SoldierMED_F) {
        displayName = "[Havoc] Rifleman [Mediterranean] (Rolled-up)";
        uniformClass =QGVAR(U_CombatUniformMC_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };

    // tropical
    class GVAR(SoldierTROP_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [Tropical]";
        uniformClass =QGVAR(U_CombatUniformMC);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\havoc_trop_clothing1_co.paa)
        };
    };
    class GVAR(RunnerTROP_F): GVAR(SoldierTROP_F) {
        displayName = "[Havoc] Rifleman [Tropical] (T-shirt)";
        uniformClass =QGVAR(U_CombatUniformMC_tshirt);
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };
    class GVAR(ScoutTROP_F): GVAR(SoldierTROP_F) {
        displayName = "[Havoc] Rifleman [Tropical] (Rolled-up)";
        uniformClass =QGVAR(U_CombatUniformMC_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };

    // Desert M03
    class GVAR(SoldierD_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [M03]";
        uniformClass =QGVAR(U_CombatUniformD);
        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_m03.paa)
        };
    };
    class GVAR(ScoutD_F): GVAR(SoldierD_F) {
        displayName = "[Havoc] Rifleman [M03] (Rolled-up)";
        uniformClass =QGVAR(U_CombatUniformD_shortsleeve);
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    };
    // Multicam
    class GVAR(SoldierMC_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [Multicam]";
        uniformClass =QGVAR(U_CombatUniformMC);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_mc.paa)
        };
    };
    class GVAR(RunnerMC_F): GVAR(SoldierMC_F) {
        displayName = "[Havoc] Rifleman [Multicam] (T-shirt)";
        uniformClass =QGVAR(U_CombatUniformMC_tshirt);
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };
    class GVAR(ScoutMC_F): GVAR(SoldierMC_F) {
        displayName = "[Havoc] Rifleman [Multicam] (Rolled-up)";
        uniformClass =QGVAR(U_CombatUniformMC_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };
    // Snow
    class GVAR(SoldierS_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [Snow]";
        uniformClass =QGVAR(U_CombatUniformSNOW);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        //model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";

        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_snow.paa)
        };
    };
    class GVAR(ScoutS_F): GVAR(SoldierS_F) {
        displayName = "[Havoc] Rifleman [Snow] (Rolled-up)";
        uniformClass =QGVAR(U_CombatUniformSNOW_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };
    // Black
    class GVAR(SoldierB_F): GVAR(Soldier_F) {
        displayName = "[Havoc] Rifleman [Black]";
        uniformClass =QGVAR(U_CombatUniformBlack);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        //model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";

        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_black.paa)
        };
    };
    class GVAR(ScoutB_F): GVAR(SoldierB_F) {
        displayName = "[Havoc] Rifleman [Black] (Thermal Suit)";
        uniformClass =QGVAR(U_CombatUniformBlack_full);
        model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    };

    // Ghillie suit
    class GVAR(Sniper_F): I_Sniper_F {
        scope = 1;
        author = AUTHOR;
        side = 1;
        displayName = "[Havoc] Sniper [M98]";
        uniformClass = QGVAR(U_GhillieSuit);
        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\uniform_m98.paa)
        };
    };

    // Pilot
    class GVAR(B_Helipilot_F): B_Helipilot_F {
        scope = 1;
        author = AUTHOR;
        side = 1;
        displayName = "[Havoc] Helicopter Pilot [M98]";
        uniformClass = QGVAR(B_HeliPilotCoveralls);
        //model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\texture\coverall_m98.paa)
        };
    };
    ////////////////////////////////////////////////////////////
    class GVAR(survival_diver_black): b_soldier_survival_F {
        nameSound="veh_infantry_diver_s";
        _generalMacro="b_soldier_survival_F";
        scope=1;
        displayName="[Havoc] Survival_diver[black]";
        model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
        modelSides[]={3,1};
        uniformClass="U_B_survival_uniform";
        hiddenUnderwaterSelections[]=
        {
            "hide"
        };
        shownUnderwaterSelections[]=
        {
            "unhide",
            "unhide2"
        };
        hiddenUnderwaterSelectionsTextures[]=
        {
            QPATHTOF(data\texture\black_flipers.paa),
            QPATHTOF(data\texture\black_flipers.paa),
            "\A3\characters_f\data\visors_ca.paa"
        };
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "Camo3",
            "Insignia"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\texture\black.paa),
            QPATHTOF(data\texture\black_boots.paa),
            QPATHTOF(data\texture\black_shirt.paa)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(data\Material\clothing.rvmat),
            "",
            ""
        };
    };
    class GVAR(survival_diver_tigerstripe): b_soldier_survival_F {
        nameSound="veh_infantry_diver_s";
        _generalMacro="b_soldier_survival_F";
        scope=1;
        displayName="[Havoc] Survival_diver[tigerstripe]";
        model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
        modelSides[]={3,1};
        uniformClass="U_B_survival_uniform";
        hiddenUnderwaterSelections[]=
        {
            "hide"
        };
        shownUnderwaterSelections[]=
        {
            "unhide",
            "unhide2"
        };
        hiddenUnderwaterSelectionsTextures[]=
        {
            QPATHTOF(data\texture\tigerstripe_flipers.paa),
            QPATHTOF(data\texture\tigerstripe_flipers.paa),
            "\A3\characters_f\data\visors_ca.paa"
        };
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "Camo3",
            "Insignia"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\texture\tigerstripe.paa),
            QPATHTOF(data\texture\tigerstripe_boots.paa),
            QPATHTOF(data\texture\tigerstripe_shirt.paa)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(data\Material\clothing.rvmat),
            "",
            ""
        };
    };
    class GVAR(survival_diver_woodland): b_soldier_survival_F {
        author = AUTHOR;
        nameSound="veh_infantry_diver_s";
        _generalMacro="b_soldier_survival_F";
        scope=1;
        displayName="[Havoc] Survival_diver[woodland]";
        model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
        modelSides[]={3,1};
        uniformClass="U_B_survival_uniform";
        hiddenUnderwaterSelections[]=
        {
            "hide"
        };
        shownUnderwaterSelections[]=
        {
            "unhide",
            "unhide2"
        };
        hiddenUnderwaterSelectionsTextures[]=
        {
            QPATHTOF(data\texture\woodland_flipers.paa),
            QPATHTOF(data\texture\woodland_flipers.paa),
            "\A3\characters_f\data\visors_ca.paa"
        };
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "Camo3",
            "Insignia"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\texture\woodland.paa),
            QPATHTOF(data\texture\woodland_boots.paa),
            QPATHTOF(data\texture\woodland_shirt.paa)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(data\Material\clothing.rvmat),
            "",
            ""
        };
    };
};
