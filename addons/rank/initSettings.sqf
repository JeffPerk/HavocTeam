
#define RANK_SETTINGS_CAT "Rank & Role: Ranks"
#define RANK_HINT "list of steam user ID's"
// ranks
[
    "ranks_corporal", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(Corporal), RANK_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    RANK_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ranks_sergeant", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(Sergeant), RANK_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    RANK_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ranks_lieutenant", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(Lieutenant), RANK_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    RANK_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ranks_captain", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(Captain), RANK_HINT],// Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    RANK_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ranks_major", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(Major), RANK_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    RANK_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ranks_colonel", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(Colonel), RANK_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    RANK_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;
