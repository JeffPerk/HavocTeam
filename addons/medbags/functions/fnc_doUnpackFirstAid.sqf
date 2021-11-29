#include "..\script_component.hpp"    
/*
 * ARMA EXTENDED ENVIRONMENT
 * \havoc_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by Ojemineh
 * 
 * unpack medical supplies
 * 
 * Arguments:
 * 0: unit - <OBJECT>
 * 
 * Return:
 * nothing
 * 
 * Example:
 * [player] call HAVOC_medical_supplies_fnc_doUnpackFirstAid;
 * 
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {
    
    params ["_unit"];
    
    _unit playAction "Gear";
    
    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_FirstAid_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        [_unit, QGVAR(Medical_FirstAid_Open_1), [], 30, 1000, -1, _pitch] call HAVOC_fnc_play3dSound;
    };
    
    HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;
    
    [
        2,
        [],
        { HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; },
        { HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        localize "Unpack Boo Boo Bag....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;
    
    waitUntil {if ((HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};
    
    if (HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {
        
        _unit removeItem "HAVOC_FirstAid";
        
        private _order = [1,3,2];
        private _overflow = false;
        
        [_unit, "ACE_fieldDressing", 6, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "kat_Painkiller", 1, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "ACE_tourniquet", 2, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "ACE_EarPlugs", 1, _order, _overflow] call havoc_fnc_addItem;
        
    };
    
    if (HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        
        [_unit, QGVAR(Medical_FirstAid_Open_1)] call HAVOC_fnc_stop3dSound;
        
        
    };
    
};
