#include "script_component.hpp"
class cfgWeapons {
    class U_I_CombatUniform;
    class U_I_CombatUniform_shortsleeve;
    class U_I_GhillieSuit;
    class U_B_HeliPilotCoveralls;
    class U_B_CTRG_1;
    class U_B_CTRG_2;
    class U_B_CTRG_3;
    class UniformItem;
    class Uniform_Base;

    // Woodland M98
    class CLASS(U_CombatUniform): U_I_CombatUniform {
        author = AUTHOR;
        displayName = "Combat Fatigues [M98]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(Soldier_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniform_shortsleeve): U_I_CombatUniform_shortsleeve {
        author = AUTHOR;
        displayName = "Combat Fatigues [M98] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(Scout_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniform_ranger): U_I_CombatUniform_shortsleeve {
        author = AUTHOR;
        displayName = "Combat Fatigues [M98] (Ranger)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(Ranger_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Desert M98
    class CLASS(U_CombatUniformD): U_I_CombatUniform {
        author = AUTHOR;
        displayName = "Combat Fatigues [M03]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(SoldierD_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformD_shortsleeve): U_I_CombatUniform_shortsleeve {
        author = AUTHOR;
        displayName = "Combat Fatigues [M03] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(ScoutD_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Multicam
    class CLASS(U_CombatUniformMC): U_B_CTRG_1 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Multicam]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(SoldierMC_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformMC_tshirt): U_B_CTRG_2 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Multicam] (T-shirt)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(RunnerMC_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformMC_shortsleeve): U_B_CTRG_3 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Multicam] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(ScoutMC_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // MED
    class CLASS(U_CombatUniformMED): U_B_CTRG_1 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Mediterranean]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(SoldierMED_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformMED_tshirt): U_B_CTRG_2 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Mediterranean] (T-shirt)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(RunnerMED_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformMED_shortsleeve): U_B_CTRG_3 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Mediterranean] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(ScoutMED_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // tropical
    class CLASS(U_CombatUniformTROP): U_B_CTRG_1 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Tropical]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(SoldierTROP_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class CLASS(U_CombatUniformTROP_tshirt): U_B_CTRG_2 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Tropical] (T-shirt)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(RunnerTROP_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformTROP_shortsleeve): U_B_CTRG_3 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Tropical] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(ScoutTROP_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Snow
    class CLASS(U_CombatUniformSNOW): U_B_CTRG_1 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Snow]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(SoldierS_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformSNOW_shortsleeve): U_B_CTRG_3 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Snow] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(ScoutS_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // black
    class CLASS(U_CombatUniformB): U_B_CTRG_1 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Black]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(SoldierB_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(U_CombatUniformB_full): U_B_CTRG_3 {
        author = AUTHOR;
        displayName = "Combat Fatigues [Black] (Thermal Suit)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(ScoutB_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // ghillie
    class CLASS(U_GhillieSuit): U_I_GhillieSuit {
        author = AUTHOR;
        displayName = "Ghillie Suit [M98]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(sniper_F);
            containerClass = "Supply60";
            mass = 60;
        };
    };
    // pilot
    class CLASS(B_HeliPilotCoveralls): U_B_HeliPilotCoveralls {
        author = AUTHOR;
        displayName = "Heli Pilot Coveralls [M98]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = CLASS(B_Helipilot_F);
            containerClass = "Supply40";
            mass = 60;
        };
    };

    ///////////////////////////////////
    class CLASS(survival_uniform_black): Uniform_Base
    {
        scope=2;
        displayName="survival_diver[black]";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass= CLASS(survival_diver_black);
            containerClass="Supply40";
            uniformType="Neopren";
            mass=60;
        };
    };
    class CLASS(survival_uniform_tigerstripe): Uniform_Base
    {
        author = AUTHOR;
        scope=2;
        displayName="survival_diver[tigerstripe]";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass= CLASS(survival_diver_tigerstripe);
            containerClass="Supply40";
            uniformType="Neopren";
            mass=60;
        };
    };

    class CLASS(survival_uniform_woodland): Uniform_Base
    {
        author = AUTHOR;
        scope=2;
        displayName="survival_diver[woodland]";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass= CLASS(survival_diver_woodland);
            containerClass="Supply40";
            uniformType="Neopren";
            mass=60;
        };
    };

};
