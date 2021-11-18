if (isDedicated) exitwith {};

if (hasinterface) then {
    player setVariable ["canUseSSScas", true, true];
    player setVariable ["canUseSSstrans", true, true];
    player setVariable ["canUseSSSarty", true, true];
    player setUnitTrait ["UAVHacker", true];
    
    player setVariable ["ace_medical_medicclass", 0, true];
    player setVariable ["ACE_isEOD", false, true];
    player setVariable ["ace_isEngineer", 0, true];

    player setVariable["draAccessDrones",TRUE,TRUE];
    player setVariable["draAccessCruise",TRUE,TRUE];
    player setVariable["draAccessSensors",TRUE,TRUE];
    player setVariable["draWhitelisted", true, true];
    daoWhitelisted=true;
    call {daoWhitelisted=true};
};

[ format [hint_havoc_default, "Communications"] ] call havoc_fnc_hint;
