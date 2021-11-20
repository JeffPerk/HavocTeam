#include "script_component.hpp"
if (isDedicated) exitwith {};



// [{condition}, {code}, [params]] call CBA_fnc_waitUntilAndExecute;
// // perfect
// waitUntil { not alive player };
// waitUntil {!isNil "ALIVE_profileSystemInit"};
// waitUntil{!(isNil"daoReady")}; // wait for mod to finish loading and then set the VAM
// waitUntil{daoReady} ;


if (hasInterface) then {
    waitUntil {sleep 1;(!isNull player && time > 0);};
    waitUntil{!(isNil"draAvailable")};
    _playerUID = getPlayerUID player;

    switch (true) do {
        case (_playerUID in Roles_comm)   : { call {draAvailable=true;};  };
    };
    waitUntil{!(isNil"daoReady")};
    switch (true) do {
        case (_playerUID in Roles_comm)   : { call {daoAvailable=true;daoJTACmode=true;};  };
    };
    switch (true) do {
        case (_playerUID in Roles_srcomm)   : { call {daoAvailable=true;daoJTACmode=false;};  };
    };
};
 



  /* if (hasInterface) then {
    _playerUID = getPlayerUID player;

    [{draAvailable},
     {
        switch (true) do {
        case (_playerUID in Roles_comm)   : { 
            call {draAvailable=true;};  
            };
        default { call {draAvailable=false;}; };
        };
     }
     ] call CBA_fnc_waitUntilAndExecute;

     [{daoReady},
     {
        switch (true) do {
        case (_playerUID in Roles_comm)   : { call {daoAvailable=true;daoJTACmode=false;};  };
        default { call {daoAvailable=false;}; };
        };
    switch (true) do {
        case (_playerUID in Roles_srcomm)   : { call {daoAvailable=true;daoJTACmode=true;};  };
        };
    }
     ] call CBA_fnc_waitUntilAndExecute;

    
}; */