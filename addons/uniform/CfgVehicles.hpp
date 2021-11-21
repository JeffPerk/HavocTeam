class cfgVehicles {
    class B_soldier_F;
    class I_Sniper_F;
    class B_Helipilot_F;
    class man;
	class I_G_Story_Protagonist_F;
    class b_soldier_survival_F;


    // Woodland M98
    class CLASS(Soldier_F): B_soldier_F {
        scope = 1;
        author = AUTHOR;
        side = 1;
        displayName = "Rifleman [M98]";
        uniformClass =QCLASS(U_CombatUniform);
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\uniform_m98.paa)
		};
    };
    class CLASS(Scout_F): CLASS(Soldier_F) {
        displayName = "Rifleman [M98] (Rolled-up)";
        uniformClass =QCLASS(U_CombatUniform_shortsleeve);
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    };
    class CLASS(Ranger_F): CLASS(Scout_F) {
        displayName = "Rifleman [M98] (Ranger)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\uniform_m98_ranger.paa)
		};
    };

    // med
    class CLASS(SoldierMED_F): CLASS(Soldier_F) {
        displayName = "Rifleman [Mediterranean]";
        uniformClass =QCLASS(U_CombatUniformMC);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\havoc_mtp_clothing1_co.paa)
		};
    };
    class CLASS(RunnerMED_F): CLASS(SoldierMED_F){
        displayName = "Rifleman [Mediterranean] (T-shirt)";
        uniformClass =QCLASS(U_CombatUniformMC_tshirt);
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };
    class CLASS(ScoutMED_F): CLASS(SoldierMED_F){
        displayName = "Rifleman [Mediterranean] (Rolled-up)";
        uniformClass =QCLASS(U_CombatUniformMC_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };

    // tropical
    class CLASS(SoldierTROP_F): CLASS(Soldier_F) {
        displayName = "Rifleman [Tropical]";
        uniformClass =QCLASS(U_CombatUniformMC);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\havoc_trop_clothing1_co.paa)
		};
    };
    class CLASS(RunnerTROP_F): CLASS(SoldierTROP_F) {
        displayName = "Rifleman [Tropical] (T-shirt)";
        uniformClass =QCLASS(U_CombatUniformMC_tshirt);
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };
    class CLASS(ScoutTROP_F): CLASS(SoldierTROP_F) {
        displayName = "Rifleman [Tropical] (Rolled-up)";
        uniformClass =QCLASS(U_CombatUniformMC_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };

    // Desert M03
    class CLASS(SoldierD_F): CLASS(Soldier_F) {
        displayName = "Rifleman [M03]";
        uniformClass =QCLASS(U_CombatUniformD);
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\uniform_m03.paa)
		};
    };
    class CLASS(ScoutD_F): CLASS(SoldierD_F) {
        displayName = "Rifleman [M03] (Rolled-up)";
        uniformClass =QCLASS(U_CombatUniformD_shortsleeve);
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    };
    // Multicam
    class CLASS(SoldierMC_F): CLASS(Soldier_F) {
        displayName = "Rifleman [Multicam]";
        uniformClass =QCLASS(U_CombatUniformMC);
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\uniform_mc.paa)
		};
    };
    class CLASS(RunnerMC_F): CLASS(SoldierMC_F) {
        displayName = "Rifleman [Multicam] (T-shirt)";
        uniformClass =QCLASS(U_CombatUniformMC_tshirt);
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };
    class CLASS(ScoutMC_F): CLASS(SoldierMC_F) {
        displayName = "Rifleman [Multicam] (Rolled-up)";
        uniformClass =QCLASS(U_CombatUniformMC_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };
    // Snow
    class CLASS(SoldierS_F): CLASS(Soldier_F) {
        displayName = "Rifleman [Snow]";
        uniformClass =QCLASS(U_CombatUniformSNOW);
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
    class CLASS(ScoutS_F): CLASS(SoldierS_F){
        displayName = "Rifleman [Snow] (Rolled-up)";
        uniformClass =QCLASS(U_CombatUniformSNOW_shortsleeve);
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };
    // Black
    class CLASS(SoldierB_F): CLASS(Soldier_F) {
        displayName = "Rifleman [Black]";
        uniformClass =QCLASS(U_CombatUniformBlack);
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
    class CLASS(ScoutB_F): CLASS(SoldierB_F) {
        displayName = "Rifleman [Black] (Thermal Suit)";
        uniformClass =QCLASS(U_CombatUniformBlack_full);
        model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    };

    // Ghillie suit
    class CLASS(Sniper_F): I_Sniper_F {
        scope = 1;
        author = AUTHOR;
        side = 1;
        displayName = "Sniper [M98]";
        uniformClass = QCLASS(U_GhillieSuit);
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\texture\uniform_m98.paa)
		};
    };

    // Pilot
    class CLASS(B_Helipilot_F): B_Helipilot_F {
        scope = 1;
        author = AUTHOR;
        side = 1;
        displayName = "Helicopter Pilot [M98]";
        uniformClass = QCLASS(B_HeliPilotCoveralls);
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
	class CLASS(survival_diver_black): b_soldier_survival_F
	{
		nameSound="veh_infantry_diver_s";
		_generalMacro="b_soldier_survival_F";
		scope=1;
		displayName="survival_diver[black]";
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
	class CLASS(survival_diver_tigerstripe): b_soldier_survival_F
	{
		nameSound="veh_infantry_diver_s";
		_generalMacro="b_soldier_survival_F";
		scope=1;
		displayName="survival_diver[tigerstripe]";
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
    class CLASS(survival_diver_woodland): b_soldier_survival_F
	{
		author = AUTHOR;
		nameSound="veh_infantry_diver_s";
		_generalMacro="b_soldier_survival_F";
		scope=1;
		displayName="survival_diver[woodland]";
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
