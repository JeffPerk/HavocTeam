class ACE_ADDON(medical_treatment) {
    class Bandaging {
        // Field dressing is normal average treatment
        // packing bandage is average treatment, higher reopen chance, longer reopening delay
        // elastic bandage is higher treatment, higher reopen chance, shorter reopen delay
        // quickclot is lower treatment, lower reopen chance, longer reopening delay
        class BasicBandage {
            effectiveness = 10;
            reopeningChance = 0;
            reopeningMinDelay = 0;
            reopeningMaxDelay = 0;
        };

        class FieldDressing {
            // Super efficiency
            class Abrasion {
                SUPER_EFF;
            };
            class AbrasionMinor: Abrasion {
                SUPER_EFF_MINOR;
            };
            class AbrasionMedium: Abrasion {
                SUPER_EFF_MEDIUM;
            };
            class AbrasionLarge: Abrasion {
                SUPER_EFF_LARGE;
            };

            class Avulsion: Abrasion {
                STANDARD_EFF;
            };
            class AvulsionMinor: Avulsion {
                STANDARD_EFF_MINOR;
            };
            class AvulsionMedium: Avulsion {
                STANDARD_EFF_MEDIUM;
            };
            class AvulsionLarge: Avulsion {
                STANDARD_EFF_LARGE;
            };

            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                STANDARD_EFF;
            };
            class CrushMinor: Crush {
                STANDARD_EFF_MINOR;
            };
            class CrushMedium: Crush {
                STANDARD_EFF_MEDIUM;
            };
            class CrushLarge: Crush {
                STANDARD_EFF_LARGE;
            };

            // Super efficiency
            class Cut: Abrasion {
                SUPER_EFF;
            };
            class CutMinor: Cut {
                SUPER_EFF_MINOR;
            };
            class CutMedium: Cut {
                SUPER_EFF_MEDIUM;
            };
            class CutLarge: Cut {
                SUPER_EFF_LARGE;
            };

            // Super efficiency
            class Laceration: Abrasion {
                SUPER_EFF;
            };
            class LacerationMinor: Laceration {
                SUPER_EFF_MINOR;
            };
            class LacerationMedium: Laceration {
                SUPER_EFF_MEDIUM;
            };
            class LacerationLarge: Laceration {
                SUPER_EFF_LARGE;
            };

            // Increased efficiency
            class VelocityWound: Abrasion {
                INCREASED_EFF;
            };
            class VelocityWoundMinor: VelocityWound {
                INCREASED_EFF_MINOR;
            };
            class VelocityWoundMedium: VelocityWound {
                INCREASED_EFF_MEDIUM;
            };
            class VelocityWoundLarge: VelocityWound {
                INCREASED_EFF_LARGE;
            };

            // Increased efficiency
            class PunctureWound: Abrasion {
                INCREASED_EFF;
            };
            class PunctureWoundMinor: PunctureWound {
                INCREASED_EFF_MINOR;
            };
            class PunctureWoundMedium: PunctureWound {
                INCREASED_EFF_MEDIUM;
            };
            class PunctureWoundLarge: PunctureWound {
                INCREASED_EFF_LARGE;
            };
        };

        class PackingBandage {
            class Abrasion {
                STANDARD_EFF;
            };
            class AbrasionMinor: Abrasion {
                STANDARD_EFF_MINOR;
            };
            class AbrasionMedium: Abrasion {
                STANDARD_EFF_MEDIUM;
            };
            class AbrasionLarge: Abrasion {
                STANDARD_EFF_LARGE;
            };

            class Avulsion: Abrasion {
                STANDARD_EFF;
            };
            class AvulsionMinor: Avulsion {
                STANDARD_EFF_MINOR;
            };
            class AvulsionMedium: Avulsion {
                STANDARD_EFF_MEDIUM;
            };
            class AvulsionLarge: Avulsion {
                STANDARD_EFF_LARGE;
            };

            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                STANDARD_EFF;
            };
            class CrushMinor: Crush {
                STANDARD_EFF_MINOR;
            };
            class CrushMedium: Crush {
                STANDARD_EFF_MEDIUM;
            };
            class CrushLarge: Crush {
                STANDARD_EFF_LARGE;
            };

            class Cut: Abrasion {
                STANDARD_EFF;
            };
            class CutMinor: Cut {
                STANDARD_EFF_MINOR;
            };
            class CutMedium: Cut {
                STANDARD_EFF_MEDIUM;
            };
            class CutLarge: Cut {
                STANDARD_EFF_LARGE;
            };

            class Laceration: Abrasion {
                STANDARD_EFF;
            };
            class LacerationMinor: Laceration {
                STANDARD_EFF_MINOR;
            };
            class LacerationMedium: Laceration {
                STANDARD_EFF_MEDIUM;
            };
            class LacerationLarge: Laceration {
                STANDARD_EFF_LARGE;
            };

            // Super efficiency
            class VelocityWound: Abrasion {
                SUPER_EFF;
            };
            class VelocityWoundMinor: VelocityWound {
                SUPER_EFF_MINOR;
            };
            class VelocityWoundMedium: VelocityWound {
                SUPER_EFF_MEDIUM;
            };
            class VelocityWoundLarge: VelocityWound {
                SUPER_EFF_LARGE;
            };

            // Super efficiency
            class PunctureWound: Abrasion {
                SUPER_EFF;
            };
            class PunctureWoundMinor: PunctureWound {
                SUPER_EFF_MINOR;
            };
            class PunctureWoundMedium: PunctureWound {
                SUPER_EFF_MEDIUM;
            };
            class PunctureWoundLarge: PunctureWound {
                SUPER_EFF_LARGE;
            };
        };

        class ElasticBandage {
            class Abrasion {
                STANDARD_EFF;
            };
            class AbrasionMinor: Abrasion {
                STANDARD_EFF_MINOR;
            };
            class AbrasionMedium: Abrasion {
                STANDARD_EFF_MEDIUM;
            };
            class AbrasionLarge: Abrasion {
                STANDARD_EFF_LARGE;
            };

            // Super efficiency
            class Avulsion: Abrasion {
                SUPER_EFF;
            };
            class AvulsionMinor: Avulsion {
                SUPER_EFF_MINOR;
            };
            class AvulsionMedium: Avulsion {
                SUPER_EFF_MEDIUM;
            };
            class AvulsionLarge: Avulsion {
                SUPER_EFF_LARGE;
            };

            // Super efficiency
            class Contusion: Abrasion {
                effectiveness = 10;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            // Super efficiency
            class Crush: Abrasion {
                SUPER_EFF;
            };
            class CrushMinor: Crush {
                SUPER_EFF_MINOR;
            };
            class CrushMedium: Crush {
                SUPER_EFF_MEDIUM;
            };
            class CrushLarge: Crush {
                SUPER_EFF_LARGE;
            };

            class Cut: Abrasion {
                STANDARD_EFF;
            };
            class CutMinor: Cut {
                STANDARD_EFF_MINOR;
            };
            class CutMedium: Cut {
                STANDARD_EFF_MEDIUM;
            };
            class CutLarge: Cut {
                STANDARD_EFF_LARGE;
            };

            class Laceration: Abrasion {
                STANDARD_EFF;
            };
            class LacerationMinor: Laceration {
                STANDARD_EFF_MINOR;
            };
            class LacerationMedium: Laceration {
                STANDARD_EFF_MEDIUM;
            };
            class LacerationLarge: Laceration {
                STANDARD_EFF_LARGE;
            };

            // Increased efficiency
            class VelocityWound: Abrasion {
                INCREASED_EFF;
            };
            class VelocityWoundMinor: VelocityWound {
                INCREASED_EFF_MINOR;
            };
            class VelocityWoundMedium: VelocityWound {
                INCREASED_EFF_MEDIUM;
            };
            class VelocityWoundLarge: VelocityWound {
                INCREASED_EFF_LARGE;
            };

            // Increased efficiency
            class PunctureWound: Abrasion {
                INCREASED_EFF;
            };
            class PunctureWoundMinor: PunctureWound {
                INCREASED_EFF_MINOR;
            };
            class PunctureWoundMedium: PunctureWound {
                INCREASED_EFF_MEDIUM;
            };
            class PunctureWoundLarge: PunctureWound {
                 INCREASED_EFF_LARGE;
            };
        };

        class QuikClot {
            class Abrasion {
                STANDARD_EFF;
            };
            class AbrasionMinor: Abrasion {
                STANDARD_EFF_MINOR;
            };
            class AbrasionMedium: Abrasion {
                STANDARD_EFF_MEDIUM;
            };
            class AbrasionLarge: Abrasion {
                STANDARD_EFF_LARGE;
            };

            class Avulsion: Abrasion {
                STANDARD_EFF;
            };
            class AvulsionMinor: Avulsion {
                STANDARD_EFF_MINOR;
            };
            class AvulsionMedium: Avulsion {
                STANDARD_EFF_MEDIUM;
            };
            class AvulsionLarge: Avulsion {
                STANDARD_EFF_LARGE;
            };

            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                STANDARD_EFF;
            };
            class CrushMinor: Crush {
                STANDARD_EFF_MINOR;
            };
            class CrushMedium: Crush {
                STANDARD_EFF_MEDIUM;
            };
            class CrushLarge: Crush {
                STANDARD_EFF_LARGE;
            };

            class Cut: Abrasion {
                STANDARD_EFF;
            };
            class CutMinor: Cut {
                STANDARD_EFF_MINOR;
            };
            class CutMedium: Cut {
                STANDARD_EFF_MEDIUM;
            };
            class CutLarge: Cut {
                STANDARD_EFF_LARGE;
            };

            class Laceration: Abrasion {
                STANDARD_EFF;
            };
            class LacerationMinor: Laceration {
                STANDARD_EFF_MINOR;
            };
            class LacerationMedium: Laceration {
                STANDARD_EFF_MEDIUM;
            };
            class LacerationLarge: Laceration {
                STANDARD_EFF_LARGE;
            };

            // Super efficiency
            class VelocityWound: Abrasion {
                SUPER_EFF;
            };
            class VelocityWoundMinor: VelocityWound {
                SUPER_EFF_MINOR;
            };
            class VelocityWoundMedium: VelocityWound {
                SUPER_EFF_MEDIUM;
            };
            class VelocityWoundLarge: VelocityWound {
                SUPER_EFF_LARGE;
            };

            // Super efficiency
            class PunctureWound: Abrasion {
                SUPER_EFF;
            };
            class PunctureWoundMinor: PunctureWound {
                SUPER_EFF_MINOR;
            };
            class PunctureWoundMedium: PunctureWound {
                SUPER_EFF_MEDIUM;
            };
            class PunctureWoundLarge: PunctureWound {
                 SUPER_EFF_LARGE;
            };
        };
    };

    class Medication {
        // How much does the pain get reduced?
        painReduce = 0;
        // How much will the heart rate be increased when the HR is low (below 55)? {minIncrease, maxIncrease}
        hrIncreaseLow[] = {0, 0};    // _heartRate < 55
        hrIncreaseNormal[] = {0, 0}; // 55 <= _heartRate <= 110
        hrIncreaseHigh[] = {0, 0};   // 110 < _heartRate

        // How long until this medication has disappeared
        timeInSystem = 120;
        // How long until the maximum effect is reached
        timeTillMaxEffect = 30;
        // How many of this type of medication can be in the system before the patient overdoses?
        maxDose = 4;
        // Function to execute upon overdose. Arguments passed to call back are 0: unit <OBJECT>, 1: medicationClassName <STRING>
        onOverDose = "";
        // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. For liquids, it corresponds to the informal concept of "thickness". This value will increase/decrease the viscoty of the blood with the percentage given. Where 100 = max. Using the minus will decrease viscosity
        viscosityChange = 0;

        // specific details for the ACE_Morphine treatment action
        class Morphine {
            painReduce = 0.8;
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 1800;
            timeTillMaxEffect = 30;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -10;
        };
        class Epinephrine {
            painReduce = 0;
            hrIncreaseLow[] = {10, 20};
            hrIncreaseNormal[] = {10, 50};
            hrIncreaseHigh[] = {10, 40};
            timeInSystem = 120;
            timeTillMaxEffect = 10;
            maxDose = 10;
            incompatibleMedication[] = {};
        };
        class Adenosine {
            painReduce = 0;
            hrIncreaseLow[] = {-7, -10};
            hrIncreaseNormal[] = {-15, -30};
            hrIncreaseHigh[] = {-15, -35};
            timeInSystem = 120;
            timeTillMaxEffect = 15;
            maxDose = 6;
            incompatibleMedication[] = {};
        };
        class PainKillers {
            painReduce = 0.1;
            timeInSystem = 600;
            timeTillMaxEffect = 60;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 5;
        };

    };
    class IV {
        // volume is in millileters
        volume = 1000;
        ratio[] = {};
        type = "Blood";
        class BloodIV {
            volume = 1000;
            ratio[] = {"Plasma", 1};
        };
        class BloodIV_500: BloodIV {
            volume = 500;
        };
        class BloodIV_250: BloodIV {
            volume = 250;
        };
        class PlasmaIV: BloodIV {
            volume = 1000;
            ratio[] = {"Blood", 1};
            type = "Plasma";
        };
        class PlasmaIV_500: PlasmaIV {
            volume = 500;
        };
        class PlasmaIV_250: PlasmaIV {
            volume = 250;
        };
        class SalineIV: BloodIV {
            volume = 1000;
            type = "Saline";
            ratio[] = {};
        };
        class SalineIV_500: SalineIV {
            volume = 500;
        };
        class SalineIV_250: SalineIV {
            volume = 250;
        };
    };
};
