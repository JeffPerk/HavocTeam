class RscText;

class RscInGameUI {
    class ACE_RscOptics_vector;

    class Havoc_RscOptics_vector: ACE_RscOptics_vector {
        controls[] = {
            "CA_FOVMode","ScopeBlack","Reticle","BodyNight","BodyDay","TrippleHeadLeft","TrippleHeadRight","CA_Zeroing","Magnification","ActiveDisplayHelper",
            "CA_Distance","CA_Heading","CA_OpticsPitch","CA_Elev","CA_OpticsZoom","CA_VisionMode","ACE_ScriptedDisplayControlsGroup","CA_Laser"
        };

        class CA_Laser: RscText {
            idc=158;
            style="0x30 + 0x800";
            sizeEx="0.038*SafezoneH";
            colorText[]={0.70599997,0.074500002,0.0196,1};
            shadow=0;
            font="EtelkaMonospacePro";
            text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
            x="29.2 * (0.01875 * SafezoneH)";
            y="3 * (0.025 * SafezoneH)";
            w="3.5 * (0.01875 * SafezoneH)";
            h="1.5 * (0.025 * SafezoneH)";
        };
    };
};
