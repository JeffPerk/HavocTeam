#include "script_component.hpp"
class CfgWeapons {

    class optic_Nightstalker;
    class InventoryOpticsItem_Base_F;
    class ACE_Vector;
    class Uniform_Base;
    class VestItem;
    class V_RebreatherB;
    class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem;
    class U_B_Wetsuit;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class optic_lrps;
    class Binocular;


    class Laserdesignator: Binocular {
            visionMode[] = {"Normal","NVG","TI"};
        };
    class GVAR(Vector_Designator): ACE_Vector {
        author = "NemesisRE";
        displayName = "[Havoc] ACE Vector Designator (NVG/TI))";
        descriptionShort = "Rangefinder/Designator";
        simulation = "weapon";
        magazines[] = {"Laserbatteries"};
        cursor = "laserDesignator";
        cursorAim = "EmptyCursor";
        cursorAimOn = "CursorAimOn";
        showSwitchAction = 1;
        weaponInfoType = "havoc_RscOptics_vector";
        class WeaponSlotsInfo {
            mass = 20;
        };
        Laser = 1;
        visionMode[] = {"Normal","NVG","TI"};
        thermalMode[] = {0};
        opticsZoomMin = 0.0099999998;
        opticsZoomMax = 0.050000001;
        opticsZoomInit = 0.050000001;
        distanceZoomMin = 100;
        distanceZoomMax = 2300;
        minRange = 150;
        midRange = 500;
        maxRange = 5000;
    };

    class GVAR(rebreather): V_RebreatherB {
        author = QAUTHOR;
        displayName = "[Havoc] Rebreather";
        class ItemInfo: VestItem {
            uniformModel = "\A3\Characters_F\Common\equip_rebreather";
            vestType = "Rebreather";
            mass = 10;
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
            containerClass = "Supply180";
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 69;
                    passThrough = 0.2;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 69;
                    passThrough = 0.2;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 69;
                    passThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 69;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            }
        };
    };

    class GVAR(Wetsuit): U_B_Wetsuit {
        author = QAUTHOR;
        displayName = "[Havoc] Wetsuit";
        picture = "\A3\characters_f\data\ui\icon_U_B_Wetsuit_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"A3\Characters_F\Common\Data\diver_suit_nato_co.paa"};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "B_diver_F";
            containerClass = "Supply120";
            uniformType = "Neopren";
            mass = 40;
        };
    };

    class GVAR(Vector_Designator_NVG): GVAR(Vector_Designator) {
        displayName = "[Havoc] ACE Vector Designator (NVG)";
        visionMode[] = {"Normal","NVG"};
        thermalMode[] = {};
    };

    class GVAR(optic_Nightstalker): optic_Nightstalker {
        author="NemesisRE";
        displayName="[Havoc] Nightstalker";
        descriptionShort = "Nightstalker Sight<br />Magnification: 1x-10x";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=12;
            opticType=1;
            optics=1;
            modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
            class OpticsModes {
                class NCTALKEP {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomMin = "0.25/1";
                    opticsZoomMax = "0.25/10";
                    opticsZoomInit = "0.25/10";
                    distanceZoomMin = 100;
                    distanceZoomMax = 1600;
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
                    discreteDistanceInitIndex = 1;
                    discreteFOV[] = {
                        "0.25/1","0.25/2","0.25/3","0.25/4","0.25/5",
                        "0.25/6","0.25/7","0.25/8","0.25/9","0.25/10"
                    };
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir="";
                };
                class Iron: NCTALKEP {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"",""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                };
            };
        };
        inertia=0.2;
    };

    class GVAR(optic_AMS_base): ItemCore {
        author="NemesisRE";
        displayName="[Havoc] AMS Base";
        descriptionShort="[Havoc] AMS (NVG)";
        _generalMacro="optic_AMS_base";
        scope=0;
        scopeCurator=0;
        scopeArsenal=0;
        model="\A3\Weapons_F_Mark\Acc\acco_ams_F.p3d";
        weaponInfoType="RscWeaponZeroing";
        overviewPicture="\A3\Data_F_Mark\Images\watermarkInfo_page17_ca.paa";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType=2;
            weaponInfoType="RscWeaponRangeZeroingFOV";
            optics=1;
            modelOptics="\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F";
            class OpticsModes {
                class AMS {
                    opticsID=1;
                    opticsDisplayName="WFOV";
                    useModelOptics=1;
                    opticsPPEffects[]= {
                        "OpticsCHAbera2",
                        "OpticsBlur3"
                    };
                    opticsZoomMin = "0.25/1";
                    opticsZoomMax = "0.25/25";
                    opticsZoomInit = "0.25/25";
                    discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
                    discreteDistanceInitIndex=2;
                    distanceZoomMin=300;
                    distanceZoomMax=2000;
                    discretefov[]={
                        "0.25/1","0.25/2","0.25/3","0.25/4","0.25/5",
                        "0.25/6","0.25/7","0.25/8","0.25/9","0.25/10",
                        "0.25/11","0.25/12","0.25/13","0.25/14","0.25/15",
                        "0.25/16","0.25/17","0.25/18","0.25/19","0.25/20",
                        "0.25/21","0.25/22","0.25/23","0.25/24","0.25/25"
                    };
                    discreteInitIndex=0;
                    memoryPointCamera="opticView";
                    modelOptics[]= {
                        "\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F",
                        "\A3\Weapons_F_Mark\Acc\reticle_acco_ams_z_F"
                    };
                    visionMode[]= {"Normal","NVG"};
                    opticsFlare=1;
                    opticsDisablePeripherialVision=1;
                    cameraDir="";
                };
                class Iron {
                    opticsID=2;
                    opticsDisplayName="";
                    useModelOptics=0;
                    opticsPPEffects[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[] = {};
                    discretefov[]={};
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    discreteInitIndex=0;
                    cameraDir="";
                };
            };
        };
        inertia=0.2;
    };
    class GVAR(optic_AMSTI_base): ItemCore {
        author="NemesisRE";
        displayName="[Havoc] AMS-TI Base";
        descriptionShort="[Havoc] AMS (NVG/TI)";
        _generalMacro="optic_AMS_base";
        scope=0;
        scopeCurator=0;
        scopeArsenal=0;
        model="\A3\Weapons_F_Mark\Acc\acco_ams_F.p3d";
        weaponInfoType="RscWeaponZeroing";
        overviewPicture="\A3\Data_F_Mark\Images\watermarkInfo_page17_ca.paa";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType=2;
            weaponInfoType="RscWeaponRangeZeroingFOV";
            optics=1;
            modelOptics="\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F";
            class OpticsModes {
                class AMS {
                    opticsID=1;
                    opticsDisplayName="WFOV";
                    useModelOptics=1;
                    opticsPPEffects[]= {
                        "OpticsCHAbera2",
                        "OpticsBlur3"
                    };
                    opticsZoomMin = "0.25/1";
                    opticsZoomMax = "0.25/25";
                    opticsZoomInit = "0.25/25";
                    discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
                    discreteDistanceInitIndex=2;
                    distanceZoomMin=300;
                    distanceZoomMax=2000;
                    discretefov[]={
                        "0.25/1","0.25/2","0.25/3","0.25/4","0.25/5",
                        "0.25/6","0.25/7","0.25/8","0.25/9","0.25/10",
                        "0.25/11","0.25/12","0.25/13","0.25/14","0.25/15",
                        "0.25/16","0.25/17","0.25/18","0.25/19","0.25/20",
                        "0.25/21","0.25/22","0.25/23","0.25/24","0.25/25"
                    };
                    discreteInitIndex=0;
                    memoryPointCamera="opticView";
                    modelOptics[]= {
                        "\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F",
                        "\A3\Weapons_F_Mark\Acc\reticle_acco_ams_z_F"
                    };
                    visionMode[]= {"Normal","NVG","Ti"};
                    thermalMode[] = {0};
                    opticsFlare=1;
                    opticsDisablePeripherialVision=1;
                    cameraDir="";
                };
                class Iron {
                    opticsID=2;
                    opticsDisplayName="";
                    useModelOptics=0;
                    opticsPPEffects[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[] = {};
                    discretefov[]={};
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    discreteInitIndex=0;
                    cameraDir="";
                };
            };
        };
        inertia=0.2;
    };
    class GVAR(optic_AMS): GVAR(optic_AMS_base) {
        author="NemesisRE";
        _generalMacro="optic_AMS";
        scope=2;
        scopeCurator=1;
        scopeArsenal=2;
        displayName="[Havoc] AMS (Black)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_ca.paa";
    };
    class GVAR(optic_AMS_khk): GVAR(optic_AMS) {
        author="NemesisRE";
        _generalMacro="optic_AMS_khk";
        displayName="[Havoc] AMS (Khaki)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_khk_ca.paa";
        model="\A3\Weapons_F_Mark\Acc\acco_ams_khk_F.p3d";
    };
    class GVAR(optic_AMS_snd): GVAR(optic_AMS) {
        author="NemesisRE";
        _generalMacro="optic_AMS_snd";
        displayName="[Havoc] AMS (Sand)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_snd_ca.paa";
        model="\A3\Weapons_F_Mark\Acc\acco_ams_snd_F.p3d";
    };
    class GVAR(optic_AMSTI): GVAR(optic_AMSTI_base) {
        author="NemesisRE";
        _generalMacro="optic_AMS";
        scope=2;
        scopeCurator=1;
        scopeArsenal=2;
        displayName="[Havoc] AMS-TI (Black)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_ca.paa";
    };
    class GVAR(optic_AMSTI_khk):  GVAR(optic_AMSTI) {
        author="NemesisRE";
        _generalMacro="optic_AMS_khk";
        displayName="[Havoc] AMS-TI (Khaki)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_khk_ca.paa";
        model="\A3\Weapons_F_Mark\Acc\acco_ams_khk_F.p3d";
    };
    class GVAR(optic_AMSTI_snd):  GVAR(optic_AMSTI) {
        author="NemesisRE";
        _generalMacro="optic_AMS_snd";
        displayName="[Havoc] AMS-TI (Sand)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_snd_ca.paa";
        model="\A3\Weapons_F_Mark\Acc\acco_ams_snd_F.p3d";
    };

/////////////////rhs
    class rhsusf_acc_sniper_base;
    class rhsusf_acc_LEUPOLDMK4_2: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class pso1_scope {
                    visionMode[] = {};
                };
            };
        };
    };

    class rhsusf_acc_premier: rhsusf_acc_LEUPOLDMK4_2 {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class pso1_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_M8541: rhsusf_acc_premier {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };

    class rhsusf_acc_nxs_3515x50_base: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class nxs_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_nxs_3515x50f1_base: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class nxs_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_nxs_5522x56_base: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class nxs_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_ACOG_MDO: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACOGMDO {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_g33_xps3: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MAG {
                    visionMode[] = {};
                };
            };
        };
    };


///////////////////////////////tier1
    class Tier1_Razor_Gen2_16: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen2_16_ADM: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen2_16_Geissele: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen2_16_Geissele_Docter: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_ADM: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_ADM_T2: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_Geissele: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_Geissele_Docter: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_ADM_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_ADM_T2_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_Geissele_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_Geissele_Docter_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Shortdot_ADM_Black: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Shortdot_Geissele_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Shortdot_Geissele_Docter_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_ADM_Black: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_ADM_T1_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_Geissele_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_Geissele_Docter_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };

    class Tier1_Eotech551_3xMag_Black_Up: ItemCore  {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_L3_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_3xMag_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_L3_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Riser_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Riser_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Riser_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Riser_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
};
