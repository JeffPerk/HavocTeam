/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\Havoc_common\functions\diagnostics\fn_isDebug.sqf
 *	by Ojemineh
 *	
 *	check if debug is enabled
 *	
 *	Arguments:
 *	nothing
 *	
 *	Return:
 *	<BOOLEAN>
 *	
 *	Example:
 *	[] call Havoc_fnc_isDebug;
 *	
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["Havoc_debug_enabled", false]);

_return;