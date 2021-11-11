#include "\z\havoc\addons\interactions\script_component.hpp"
/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\havoc\addons\interactions\functions\fn_initSettings.sqf
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
 * [] call HAVOC_interactions_fnc_initSettings;
 *
 */

// -------------------------------------------------------------------------------------------------

// core

[
    "havoc_interactions_global_sounds",
    "CHECKBOX",
    [
        localize "STR_HAVOC_Interactions_CBA_Global_Sounds_Title", 
        localize "STR_HAVOC_Interactions_CBA_Global_Sounds_Tip"
    ],
    [
        COMPONENT_NAME, 
        localize "STR_HAVOC_Interactions_CBA_Category_core"
    ],
    true,
    1,
    {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------

// TAPSHOULDER

[
    "havoc_interactions_tapshoulder_ai",
    "CHECKBOX",
    [
        localize "STR_HAVOC_Interactions_CBA_TapShoulder_AI_Title",
        localize "STR_HAVOC_Interactions_CBA_TapShoulder_AI_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_HAVOC_Interactions_CBA_Category_TapShoulder"
    ],
    false,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "havoc_interactions_tapshoulder_hint",
    "CHECKBOX",
    [
        localize "STR_HAVOC_Interactions_CBA_TapShoulder_Hint_Title",
        localize "STR_HAVOC_Interactions_CBA_TapShoulder_Hint_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_HAVOC_Interactions_CBA_Category_TapShoulder"
    ],
    true,
    0,
    {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------
// ACCESS BACKPACK

[
    "havoc_interactions_backpack_access_faction",
    "LIST",
    [
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Faction_Title", 
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Faction_Tip"
    ],
    [
        COMPONENT_NAME, 
        localize "STR_HAVOC_Interactions_CBA_Category_Backpacks"
    ],
    [
        [0,1,2], 
        [
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Faction_0", 
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Faction_1", 
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Faction_2"
        ], 
        2
    ],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "havoc_interactions_backpack_access_friendly",
    "LIST",
    [
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Friendly_Title", 
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Friendly_Tip"
    ],
    [
        COMPONENT_NAME, 
        localize "STR_HAVOC_Interactions_CBA_Category_Backpacks"
    ],
    [
        [0,1], 
        [
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Friendly_0", 
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Friendly_1"
        ], 
        1
    ],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "havoc_interactions_backpack_access_enemy",
    "LIST",
    [
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Enemy_Title", 
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Enemy_Tip"
    ],
    [
        COMPONENT_NAME, 
        localize "STR_HAVOC_Interactions_CBA_Category_Backpacks"
    ],
    [
        [0,1], 
        [
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Enemy_0", 
            "STR_HAVOC_Interactions_CBA_Backpack_Access_Enemy_1"
        ], 
        0
    ],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "havoc_interactions_backpack_access_hint",
    "CHECKBOX",
    [
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Hint_Title", 
        localize "STR_HAVOC_Interactions_CBA_Backpack_Access_Hint_Tip"
    ],
    [
        COMPONENT_NAME, 
        localize "STR_HAVOC_Interactions_CBA_Category_Backpacks"
    ],
    true,
    0,
    {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------

// ACCESS GEAR

[
    "havoc_interactions_gear_access_enabled",
    "LIST",
    [
        localize "STR_HAVOC_Interactions_CBA_Gear_Access_Enabled_Title", 
        localize "STR_HAVOC_Interactions_CBA_Gear_Access_Enabled_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_HAVOC_Interactions_CBA_Category_Gear"
    ],
    [
        [0,1], 
        [
            "STR_HAVOC_Interactions_CBA_Gear_Access_Enabled_0", 
            "STR_HAVOC_Interactions_CBA_Gear_Access_Enabled_1"
        ], 
        1
    ],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "havoc_interactions_gear_access_hint",
    "CHECKBOX",
    [
        localize "STR_HAVOC_Interactions_CBA_Gear_Access_Hint_Title", 
        localize "STR_HAVOC_Interactions_CBA_Gear_Access_Hint_Tip"
    ],
    [
        COMPONENT_NAME, 
        localize "STR_HAVOC_Interactions_CBA_Category_Gear"
    ],
    true,
    0,
    {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------
