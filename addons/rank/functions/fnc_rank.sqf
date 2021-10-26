#include "script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    _playerUID = getplayerUID player;
    
    switch (true) do {
        case (_playerUID in ranks_corporal) : {
            player setRank "CORPORAL";
        };
        case (_playerUID in ranks_sergeant) : {
            player setRank "SERGEANT";
        };
        case (_playerUID in ranks_lieutenant) : {
            player setRank "LIEUTENANT";
        };
        case (_playerUID in ranks_captain) : {
            player setRank "CAPTAIN";
        };
        case (_playerUID in ranks_major) : {
            player setRank "MAJOR";
        };
        case (_playerUID in ranks_colonel) : {
            player setRank "COLONEL";
        };
        default {
            player setRank "PRIVATE";
        };
    };
};