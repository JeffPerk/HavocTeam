#include "..\script_component.hpp"    

class GVAR(Morphine) {
    allowSelfTreatment = 1;
    medicRequired = 0;
    treatmentTimeSelfCoef = 1; // todo: this isn't used anywhere, remove?
    consumeItem = 1;
    allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
    treatmentTime = ace_medical_treatment_treatmentTimeAutoinjector;
    displayName = "Morphine 10mg/1mL";
    displayNameProgress = "Injecting Morphine";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    category = "medication";
    condition = "havoc_Medical_fnc_vpnMedicationCondition";
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "havoc_Medical_fnc_vpnMedicationSuccess";
    callbackFailure = "";
    items[] = {
        GVAR(Morphine)
    };
    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
    animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
    animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
    sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    litter[] = {{}};
};

class GVAR(Epinephrine): GVAR(Morphine) {
    displayName = "Adrenaline 1mg/1mL";
    displayNameProgress = "Injecting Adrenaline";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    condition = "havoc_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "havoc_Medical_fnc_vpnMedicationSuccess";
    requiresAll=true;
    items[] = {
        QGVAR(Epinephrine)
    };
    litter[] = {{}};
};


////////////////////////////////////////////////////////////////////////////////

class Naloxone: GVAR(Morphine) {
    displayName="Naloxone 1.6mg/4mL";
    displayNameProgress="Injecting Naloxone";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    condition = "havoc_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "havoc_Medical_fnc_naloxoneSuccess";
    requiresAll=true;
    items[] = {
        QGVAR(naloxone)
    };
    litter[] = {{}};
};

class Fentanyl: GVAR(Morphine) {
    displayName="Fentanyl 100mcg/2mL";
    displayNameProgress="Injecting Fentanyl";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    condition = "havoc_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "havoc_Medical_fnc_vpnMedicationSuccess";
    requiresAll=true;
    items[]={
        QGVAR(fentanyl)
    };
    litter[] = {{}};
};

class Ketamine_6mg: GVAR(Morphine) {
    displayName="Ketamine 6mg/2mL";
    displayNameProgress="Injecting Ketamine 6mg/2mL";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    requiresAll=true;
    items[] = {
        QGVAR(ketamine)
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "havoc_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

class Ketamine_200mg: GVAR(Morphine) {
    displayName="Ketamine 200mg/2mL";
    displayNameProgress="Injecting Ketamine 200mg/2mL";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    requiresAll=true;
    items[] = {
        QGVAR(ketamine)
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "havoc_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication: GVAR(Morphine) {
    condition = "";
    callbackSuccess = "";
};

class Tetra: NonVPNMedication {
    displayName="Tetracycline 250mg";
    displayNameProgress="Giving Tetracycline";
    icon="\z\havoc\addons\media\images\icon\tetra.paa";
    items[]={
        QGVAR(tetra)
    };
    allowedSelections[]={
        "Head"
    };
};

class Apap: NonVPNMedication {
    displayName="Paracetemol 1g";
    displayNameProgress="Giving Paracetemol 1g";
    icon="\z\havoc\addons\media\images\icon\apap.paa";
    condition = "";
    callbackStart = "";

    items[] = {
        QGVAR(Apap)
    };
    allowedSelections[] = {
        "Head"
    };
    treatmentTime=1;
    litter[] = {{}};
};