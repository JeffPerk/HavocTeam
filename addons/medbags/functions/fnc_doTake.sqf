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
 * [player] call havoc_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "havoc_medbags_FirstAid";

[_unit, "havoc_medbags_FirstAid", 1, _order, _overflow] call havoc_common_fnc_addItem;
