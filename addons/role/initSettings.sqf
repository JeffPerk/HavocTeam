
#define ROLE_SETTINGS_CAT "Rank & Role: Roles"
#define ROLE_HINT "list of steam user ID's"
// Roles
[
    "Roles_medic", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(medic), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

/* [
    "Roles_srmedic", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(srmedic), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting; */

[
    "Roles_eng", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(eng), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

/* [
    "Roles_sreng", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(sreng), ROLE_HINT],// Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting; */

[
    "Roles_comm", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(comm), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

/* [
    "Roles_srcomm", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(srcomm), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;
 */