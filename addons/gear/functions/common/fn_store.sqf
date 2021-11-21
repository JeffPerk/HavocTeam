/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\havoc\addons\gear\functions\common\fn_store.sqf
 *	by Ojemineh
 *
 *	stores unit loadout
 *
 *	Arguments:
 *	0: unit	- <OBJECT>
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[player] call havoc_gear_fnc_store;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

if (Not local _unit) exitWith {
	[_unit] remoteExecCall ["havoc_gear_fnc_store", _unit];
};

// -------------------------------------------------------------------------------------------------

private _array = [];

private _loadout = getUnitLoadout _unit;
_array pushBack _loadout;

private _insignia = [_unit] call BIS_fnc_getUnitInsignia;
_array pushBack _insignia;

_unit setVariable ["havoc_gear_storage", _array, true];
