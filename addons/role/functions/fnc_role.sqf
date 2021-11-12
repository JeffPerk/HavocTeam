#include "script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    _playerUID = getplayerUID player;
    
    switch (true) do {
        case (_playerUID in Roles_medic) : {
            player setVariable ["ace_medical_medicclass", 1, true];
        };
    };
    switch (true) do {
        case (_playerUID in Roles_eng) : {
            player setVariable ["ACE_isEOD", true, true];
            player setVariable ["ace_isEngineer", 1, true];
        };
    };
    switch (true) do {
        case (_playerUID in Roles_comm) : {
            player setVariable ["canUseSSScas", true, true];
            player setVariable ["canUseSSstrans", true, true];
            player setVariable ["canUseSSSarty", true, true];
            player setUnitTrait ["UAVHacker", true];
        };
    };
    default {
        };
};
