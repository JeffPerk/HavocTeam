#include "\a3\ui_f\hpp\definedikcodes.inc"
/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\Havoc_common\functions\fn_initialize.sqf
 *	by Ojemineh
 *	
 *	initialize common addon
 *	
 *	Arguments:
 *	nothing
 *	
 *	Return:
 *	nothing
 *	
 *	Example:
 *	[] call Havoc_common_fnc_initialize;
 *	
 */

// -------------------------------------------------------------------------------------------------

private _version = ["Havoc_common"] call Havoc_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "common"] call Havoc_fnc_log;

// -------------------------------------------------------------------------------------------------

Havoc_COMMON_HELPER_OBJECT = "Sign_Sphere10cm_Geometry_F";

// -------------------------------------------------------------------------------------------------

[
    "Havoc_common_log", 
    {
        _this call Havoc_fnc_log;
    }
] call CBA_fnc_addEventHandler;

[
    "Havoc_common_diagLog", 
    {
        if (missionNamespace getVariable ["Havoc_debug_enabled", false]) then {
            _this call Havoc_fnc_log;
        };
    }
] call CBA_fnc_addEventHandler;

// -------------------------------------------------------------------------------------------------

if !(hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------
// KEY: SCREENSHOT

[
    "STR_Havoc_Common_CBA_Category", 
    "Havoc_Common_KEY_Screenshot", 
    ["STR_Havoc_Common_KEY_Screenshot_Title", "STR_Havoc_Common_KEY_Screenshot_Tip"], 
    {
        [] call Havoc_fnc_screenshot;
    }, 
    {}, 
    [DIK_F12, [false, true, false]]
] call CBA_fnc_addKeybind;

// -------------------------------------------------------------------------------------------------
// TACTICAL VIEW

[{
    
    params ["_params", "_pfhHandler"];
    
    if (cameraView isEqualTo "GROUP") then {
        if !(missionNamespace getVariable ["Havoc_tactical_view_enabled", false]) then {
            player switchCamera "INTERNAL";
        };
    };
    
}, 0, []] call CBA_fnc_addPerFrameHandler;

// -------------------------------------------------------------------------------------------------
