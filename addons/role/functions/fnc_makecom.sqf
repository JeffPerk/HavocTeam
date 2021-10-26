if (isDedicated) exitwith {};

if (hasinterface) then {
    player setVariable ["canUseSSScas", true, true];
    player setVariable ["canUseSSstrans", true, true];
    player setVariable ["canUseSSSarty", true, true];
    player setUnitTrait ["UAVHacker", true];
    
    player setVariable ["ace_medical_medicclass", 0, true];
    player setVariable ["ACE_isEOD", false, true];
    player setVariable ["ace_isEngineer", 0, true];
    
    player setVariable["draWhitelisted", true, true];
    daoWhitelisted=true;
};

[name player " Communications", true, 5, 2] call ace_common_fnc_displayText;