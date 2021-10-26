#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggerd by HandleDisconnect-Eventhandler on Server.
 * Handles deleting the chestpack of old units form disconnected players.
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * _this call HAVOC_boc_fnc_HandleDisconnect;
 *
 * Public: Yes
 */
params ["_unit"];

if !([_unit] call FUNC(chestpack) isEqualTo "") then {
    [objectParent ([_unit] call FUNC(chestpackContainer)), _unit] spawn {
        params ["_weaponHolder","_unit"];
        sleep 1.5;
        if !(alive _unit) then {
            deleteVehicle _weaponHolder;
        };
    };
};
