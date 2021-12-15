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
    class GVAR(U_CombatUniform): U_I_CombatUniform {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [M98]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniform_shortsleeve): U_I_CombatUniform_shortsleeve {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [M98] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Scout_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniform_ranger): U_I_CombatUniform_shortsleeve {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [M98] (Ranger)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Ranger_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Desert M98
    class GVAR(U_CombatUniformD): U_I_CombatUniform {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [M03]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(SoldierD_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformD_shortsleeve): U_I_CombatUniform_shortsleeve {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [M03] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(ScoutD_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Multicam
    class GVAR(U_CombatUniformMC): U_B_CTRG_1 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Multicam]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(SoldierMC_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformMC_tshirt): U_B_CTRG_2 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Multicam] (T-shirt)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(RunnerMC_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformMC_shortsleeve): U_B_CTRG_3 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Multicam] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(ScoutMC_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // MED
    class GVAR(U_CombatUniformMED): U_B_CTRG_1 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Mediterranean]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(SoldierMED_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformMED_tshirt): U_B_CTRG_2 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Mediterranean] (T-shirt)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(RunnerMED_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformMED_shortsleeve): U_B_CTRG_3 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Mediterranean] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(ScoutMED_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // tropical
    class GVAR(U_CombatUniformTROP): U_B_CTRG_1 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Tropical]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(SoldierTROP_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(U_CombatUniformTROP_tshirt): U_B_CTRG_2 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Tropical] (T-shirt)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(RunnerTROP_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformTROP_shortsleeve): U_B_CTRG_3 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Tropical] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(ScoutTROP_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Snow
    class GVAR(U_CombatUniformSNOW): U_B_CTRG_1 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Snow]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(SoldierS_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformSNOW_shortsleeve): U_B_CTRG_3 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Snow] (Rolled-up)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(ScoutS_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // black
    class GVAR(U_CombatUniformB): U_B_CTRG_1 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Black]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(SoldierB_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_CombatUniformB_full): U_B_CTRG_3 {
        author = QAUTHOR;
        displayName = "[Havoc] Combat Fatigues [Black] (Thermal Suit)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(ScoutB_F);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // ghillie
    class GVAR(U_GhillieSuit): U_I_GhillieSuit {
        author = QAUTHOR;
        displayName = "[Havoc] Ghillie Suit [M98]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(sniper_F);
            containerClass = "Supply60";
            mass = 60;
        };
    };
    // pilot
    class GVAR(B_HeliPilotCoveralls): U_B_HeliPilotCoveralls {
        author = QAUTHOR;
        displayName = "[Havoc] Heli Pilot Coveralls [M98]";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(B_Helipilot_F);
            containerClass = "Supply40";
            mass = 60;
        };
    };

    ///////////////////////////////////
    class GVAR(survival_uniform_black): Uniform_Base {
        scope=2;
        displayName="[Havoc] Survival_diver[black]";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel="-";
            uniformClass= QGVAR(survival_diver_black);
            containerClass="Supply40";
            uniformType="Neopren";
            mass=60;
        };
    };
    class GVAR(survival_uniform_tigerstripe): Uniform_Base {
        author = QAUTHOR;
        scope=2;
        displayName="[Havoc] Survival_diver[tigerstripe]";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel="-";
            uniformClass= QGVAR(survival_diver_tigerstripe);
            containerClass="Supply40";
            uniformType="Neopren";
            mass=60;
        };
    };

    class GVAR(survival_uniform_woodland): Uniform_Base {
        author = QAUTHOR;
        scope=2;
        displayName="[Havoc] Survival_diver[woodland]";
        picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel="-";
            uniformClass= QGVAR(survival_diver_woodland);
            containerClass="Supply40";
            uniformType="Neopren";
            mass=60;
        };
    };
};
