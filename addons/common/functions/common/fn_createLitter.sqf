/*
 * ARMA EXTENDED ENVIRONMENT
 * \Havoc_common\functions\common\fn_createLitter.sqf
 * by Ojemineh
 * 
 * create litter on ground
 * 
 * Arguments:
 * 0: unit   - <OBJECT>
 * 1: className - <STRING>
 * 2: offset  - <ARRAY>
 * 
 * Return:
 * nothing
 * 
 * Example:
 * [player, "MedicalGarbage_01_FirstAidKit_F"] call Havoc_fnc_createLitter;
 * 
 */

// -------------------------------------------------------------------------------------------------

private ["_unit", "_className", "_offset"];

_unit  = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_className = [_this, 1, "", [""]] call BIS_fnc_param;
_offset  = [_this, 2, [], [[]]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};
if (_className isEqualTo "") exitWith {};

if (_offset isEqualTo []) then {_offset = [0,0,0];};

// -------------------------------------------------------------------------------------------------

if (missionNamespace getVariable ["ace_medical_allowLitterCreation", false]) then {
    [_unit, _className, _offset] remoteExecCall ["Havoc_fnc_createLitterServer", 2];
};
