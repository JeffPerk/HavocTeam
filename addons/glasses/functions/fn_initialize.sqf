/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\havoc\addons\glasses\functions\fn_initialize.sqf
 *	by Ojemineh
 *
 *	initialize glasses addon
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[] call havoc_glasses_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["havoc_glasses"] call havoc_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "glasses"] call havoc_fnc_log;

// -------------------------------------------------------------------------------------------------
