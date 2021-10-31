/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\havoc_medical\functions\fn_initialize.sqf
 *	by Ojemineh
 *	
 *	initialize medical addon
 *	
 *	Arguments:
 *	nothing
 *	
 *	Return:
 *	nothing
 *	
 *	Example:
 *	[] call HAVOC_medical_fnc_initialize;
 *	
 */

// -------------------------------------------------------------------------------------------------

private _version = ["havoc_medical"] call HAVOC_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "medical"] call HAVOC_fnc_log;

// -------------------------------------------------------------------------------------------------

if !(hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------

[] spawn {
	
	waitUntil {if (!isNull player) exitWith {true}; false};
	
	if !(player getVariable ["ace_medical_addedToUnitLoop", false]) then {
		[player] call ACE_medical_fnc_addVitalLoop;
	};
	
};

// -------------------------------------------------------------------------------------------------
