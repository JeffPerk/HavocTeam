/*
 * ARMA EXTENDED ENVIRONMENT
 * \Havoc_common\functions\fn_initSettings.sqf
 * by Ojemineh
 * 
 * register cba settings
 * 
 * Arguments:
 * nothing
 * 
 * Return:
 * nothing
 * 
 * Example:
 * [] call Havoc_common_fnc_initSettings;
 * 
 */

// -------------------------------------------------------------------------------------------------

// COMMON SETTINGS

[
    "Havoc_debug_enabled",
    "CHECKBOX",
    [
        localize "STR_Havoc_Common_CBA_Debug_Enabled_Title", 
        localize "STR_Havoc_Common_CBA_Debug_Enabled_Tip"
    ],
    [
        localize "STR_Havoc_Common_CBA_Category", 
        localize "STR_Havoc_Common_CBA_Category_Common"
    ],
    false,
    0,
    {}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------

[
    "Havoc_tactical_view_enabled",
    "CHECKBOX",
    [
        localize "STR_Havoc_Common_CBA_Tactical_View_Title", 
        localize "STR_Havoc_Common_CBA_Tactical_View_Tip"
    ],
    [
        localize "STR_Havoc_Common_CBA_Category", 
        localize "STR_Havoc_Common_CBA_Category_Options"
    ],
    false,
    1,
    {}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------
