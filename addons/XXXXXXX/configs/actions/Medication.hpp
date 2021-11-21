    

class HAVOC_Morphine {
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
    condition = "HAVOC_Medical_fnc_vpnMedicationCondition";
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "HAVOC_Medical_fnc_vpnMedicationSuccess";
    callbackFailure = "";
    items[] = {
        "HAVOC_morphine"
    };
    
    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
    animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
    animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
    sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    litter[] = {{}};
};

class HAVOC_Epinephrine: HAVOC_Morphine {
    displayName = "Adrenaline 1mg/1mL";
    displayNameProgress = "Injecting Adrenaline";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    condition = "HAVOC_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "HAVOC_Medical_fnc_vpnMedicationSuccess";
    requiresAll=true;
    items[] = {
        "HAVOC_epinephrine"
    };
    litter[] = {{}};
};


////////////////////////////////////////////////////////////////////////////////

class Naloxone : HAVOC_Morphine {
    displayName="Naloxone 1.6mg/4mL";
    displayNameProgress="Injecting Naloxone";
    icon="\z\havoc\addons\media\images\icon\VPN.paa";
    condition = "HAVOC_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "HAVOC_Medical_fnc_naloxoneSuccess";
    requiresAll=true;
    items[] = {
        "HAVOC_naloxone"
    };
    litter[] = {{}};
};

class Fentanyl: HAVOC_Morphine{
    displayName="Fentanyl 100mcg/2mL";
    displayNameProgress="Injecting Fentanyl";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    condition = "HAVOC_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "HAVOC_Medical_fnc_vpnMedicationSuccess";
    requiresAll=true;
    items[]={
        "HAVOC_fentanyl"
    };
    litter[] = {{}};
};

class Ketamine_6mg : HAVOC_Morphine {
    displayName="Ketamine 6mg/2mL";
    displayNameProgress="Injecting Ketamine 6mg/2mL";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    requiresAll=true;
    items[] = {
        "HAVOC_ketamine"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "HAVOC_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

class Ketamine_200mg : HAVOC_Morphine {
    displayName="Ketamine 200mg/2mL";
    displayNameProgress="Injecting Ketamine 200mg/2mL";
    icon = "\z\havoc\addons\media\images\icon\VPN.paa";
    requiresAll=true;
    items[] = {
        "HAVOC_ketamine"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "HAVOC_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication : HAVOC_Morphine {
    condition = "";
    callbackSuccess = "";
};

class Tetra : NonVPNMedication {
    displayName="Tetracycline 250mg";
    displayNameProgress="Giving Tetracycline";
    icon="\z\havoc\addons\media\images\icon\tetra.paa";
    items[]={
        "HAVOC_tetra"
    };
    allowedSelections[]={
        "Head"
    };
};

class Apap : NonVPNMedication {
    displayName="Paracetemol 1g";
    displayNameProgress="Giving Paracetemol 1g";
    icon="\z\havoc\addons\media\images\icon\apap.paa";
    condition = "";
    callbackStart = "";

    items[] = {
        "HAVOC_Apap"
    };
    allowedSelections[] = {
        "Head"
    };
    treatmentTime=1;
    litter[]={
        {"All","",{"HAVOC_ApapLitter"}}
    };
};