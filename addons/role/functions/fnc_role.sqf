#include "script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    _playerUID = getplayerUID player;
    
    switch (true) do {
        case (_playerUID in Roles_medic) : {
            player setVariable ["ace_medical_medicclass", 1, true];
            [ format [hint_havoc_default, "Medic"] ] call havoc_fnc_hint;
        };
    };
    switch (true) do {
        case (_playerUID in Roles_eng) : {
            player setVariable ["ACE_isEOD", true, true];
            player setVariable ["ace_isEngineer", 1, true];
            [ format [hint_havoc_default, "Engineer"] ] call havoc_fnc_hint;
        };
    };
    switch (true) do {
        case (_playerUID in Roles_comm) : {
            player setVariable ["canUseSSScas", true, true];
            player setVariable ["canUseSSstrans", true, true];
            player setVariable ["canUseSSSarty", true, true];
            player setUnitTrait ["UAVHacker", true];
            player setVariable["draAccessDrones",TRUE,TRUE];
            player setVariable["draAccessCruise",TRUE,TRUE];
            player setVariable["draAccessSensors",TRUE,TRUE];
            player setVariable["draWhitelisted", true, true];
            daoWhitelisted=true;
            [ format [hint_havoc_default, "Communications"] ] call havoc_fnc_hint;
        };
    };
};
