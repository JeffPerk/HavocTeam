// Reporting AI
[
    "HAVOC_AI_Reporting",
    "CHECKBOX",
    ["Spawn Reporting", "Receive a systemchat message for any groups or vehicles that fail to spawn."],
    "LRG AI",
    false,
    true,
    {

    }
] call CBA_Settings_fnc_init;

// Initial AI
[
    "HAVOC_AI_InitialAI",
    "CHECKBOX",
    ["Include Initial AI", "This will automatically apply to AI Spawns and Zeus placed AI. If enabled it will also apply to any Editor placed AI at mission start."],
    "LRG AI",
    true,
    true,
    {
        if (_this && { isserver }) then  { call havoc_fnc_SetInitialAI};
    }
] call CBA_Settings_fnc_init;

// AI Aiming Accuracy
[
    "HAVOC_AI_AimingAccuracy",
    "SLIDER",
    ["Min Aiming Accuracy", "Higher value means the AI will be more likely to hit the target."],
    "LRG AI",
    [0, 1, 0.10, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Aiming Shake
[
    "HAVOC_AI_AimingShake",
    "SLIDER",
    ["Min Aiming Shake", "Higher value means the AI will be more precise."],
    "LRG AI",
    [0, 1, 0.45, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Aiming Speed
[
    "HAVOC_AI_AimingSpeed",
    "SLIDER",
    ["Min Aiming Speed", "Higher value means the AI can rotate and stabilize its aim faster."],
    "LRG AI",
    [0, 1, 0.30, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Commanding
[
    "HAVOC_AI_Commanding",
    "SLIDER",
    ["Commanding", "Higher value means the AI can report targets faster."],
    "LRG AI",
    [0, 1, 1.00, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Courage
[
    "HAVOC_AI_Courage",
    "SLIDER",
    ["Courage", "Higher value means the AI can report targets faster."],
    "LRG AI",
    [0, 1, 1.00, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI General
[
    "HAVOC_AI_General",
    "SLIDER",
    ["General", "Higher value improves the AI's decision making."],
    "LRG AI",
    [0, 1, 1.00, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Min Reload Speed
[
    "HAVOC_AI_ReloadSpeed",
    "SLIDER",
    ["Min Reload Speed", "Higher value means the AI can switch or reload weapons faster."],
    "LRG AI",
    [0, 1, 0.50, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Min Spot Distance
[
    "HAVOC_AI_SpotDistance",
    "SLIDER",
    ["Min Spot Distance", "Higher value means the AI is better at spotting targets."],
    "LRG AI",
    [0, 1, 0.40, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Min Spot Time
[
    "HAVOC_AI_SpotTime",
    "SLIDER",
    ["Min Spot Time", "Higher value means the AI will react faster to death, damage or enemies."],
    "LRG AI",
    [0, 1, 0.20, 2],
    true,
    {

    }
] call CBA_Settings_fnc_init;