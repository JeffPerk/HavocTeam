#include "script_component.hpp"
[
    "havoc_medical_persistantRevive",
    "CHECKBOX",
    ["Enable Continuous", "Enable a persistant death timer, will keep track of how long a player is in Cardiac arrest in total."],
    COMPONENT_NAME,
    true,
    true
] call CBA_fnc_addSetting;

[
    "havoc_medical_persistantReviveTimer",
    "TIME",
    ["Revive Timer", "Length for the persistant death timer (recomend between 1 -> 3 times the ACE CA timer). To only use this, set ACE's CA timer as higher than this."],
    COMPONENT_NAME,
    [1, 3600, 240],
    true
] call CBA_fnc_addSetting;

//Settable list for using drug per medical class
[
    QGVAR(medLvl_drug),
    "LIST",
    ["Medical Level", "Training level required to use Medications"],
    CBA_SETTINGS_CAT,
    [[1, 2], ["Medics", "Doctors"], 2],
    true
] call CBA_settings_fnc_init;