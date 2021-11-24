    class InventoryItem_Base_F;
    class ItemCore;
    class Vest_Camo_Base;
    class Vest_NoCamo_Base;
    class VestItem;
    class V_PlateCarrierGL_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_TacVest_khk;
    class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
		class ItemInfo;
	};




    // carrier lite 990
    class CLASS(Item_Vest_PlateCarrier1_brnred ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite Red Squad (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_red.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    // carrier 990
    class CLASS(Item_Vest_PlateCarrier2_brnyonv ): V_PlateCarrier2_rgr {
        author = AUTHOR;
        displayName = "Carrier Rig YonV(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_yonv.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 90;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
        };
    };

    // carrier lite 991
    class CLASS(Item_Vest_PlateCarrier1_brnmidas ): V_PlateCarrier1_rgr {
        author = AUTHOR;
        displayName = "Carrier Lite Midas (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_brown_midas.paa)};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
            containerClass = "Supply180";
            mass = 60;
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 69;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 69;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 69;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 69;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
    };
    
