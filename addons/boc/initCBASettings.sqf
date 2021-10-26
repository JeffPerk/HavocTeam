[
    QGVAR(disabled),
    "CHECKBOX",
    "Disable Backpack on Chest",
    ["HAVOC BoC","Main"],
    false,
    1
] call CBA_fnc_addSetting;

[
    QGVAR(forceWalk),
    "CHECKBOX",
    "Enable force walk while Backpack on Chest",
    ["HAVOC BoC","Main"],
    false,
    1
] call CBA_fnc_addSetting;

[
    QGVAR(removeKilledPlayerChestpack),
    "CHECKBOX",
    "Remove chestpack of dead players",
    ["HAVOC BoC","Main"],
    true,
    1
] call CBA_fnc_addSetting;
