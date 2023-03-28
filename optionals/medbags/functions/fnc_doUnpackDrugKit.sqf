#include "..\script_component.hpp"    
/*
 * ARMA EXTENDED ENVIRONMENT
 * \havoc_medical\supplies\functions\fn_doUnpackDrugKit.sqf
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
 * [player] call HAVOC_medical_supplies_fnc_doUnpackDrugKit;
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
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\havoc\addons\medbags\data\sounds\medickit_open_1.ogg", _unit];
    };
    
    HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;
    
    [
        2,
        [],
        { HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; },
        { HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        localize "Unpack Drug Kit....",

        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;
    
    waitUntil {if ((HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};
    
    if (HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {
        
        _unit removeItem "havoc_medbags_DrugKit";
        
        private _order = [3,1,2];
        private _overflow = false;
        
        [_unit, "havoc_medical_VPN", 24, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_medical_epinephrine", 4, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_medical_fentanyl", 4, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_medical_ketamine", 8, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_medical_morphine", 4, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_medical_naloxone", 4, _order, _overflow] call havoc_fnc_addItem;
    
        _unit playActionNow "Stand";
        
    };
    
    if (HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        
        [_unit, QGVAR(Medical_MedicKit_Open_1)] call HAVOC_fnc_stop3dSound;
        
        _unit playActionNow "Stand";
        
    };
    
};
