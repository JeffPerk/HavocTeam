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
        playSound "HAVOC_Medical_DrugKit_Open_1";
    } else {
        private _pitch = random [0.6, 1, 1.4];
        [_unit, "HAVOC_Medical_DrugKit_Open_1", [], 30, 1000, -1, _pitch] call HAVOC_fnc_play3dSound;
    };
    
    HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;
    
    [
        2,
        [],
        { HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; },
        { HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        localize "STR_HAVOC_Medical_Supplies_Progress_DrugKit",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;
    
    waitUntil {if ((HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};
    
    if (HAVOC_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {
        
        _unit removeItem "HAVOC_DrugKit";
        
        private _order = [3,1,2];
        private _overflow = false;
        
        [_unit, "havoc_VPN", 24, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_epinephrine", 4, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_fentanyl", 4, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_ketamine", 8, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_morphine", 4, _order, _overflow] call havoc_fnc_addItem;
        [_unit, "havoc_naloxone", 4, _order, _overflow] call havoc_fnc_addItem;
    
        _unit playActionNow "Stand";
        
    };
    
    if (HAVOC_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        
        [_unit, "HAVOC_Medical_DrugKit_Open_1"] call HAVOC_fnc_stop3dSound;
        
        _unit playActionNow "Stand";
        
    };
    
};
