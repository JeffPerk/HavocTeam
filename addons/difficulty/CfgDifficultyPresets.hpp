class CfgDifficultyPresets {

    defaultPreset = QGVAR(Difficulty);

    class Custom;
    class GVAR(Difficulty): Custom {
        displayName = CSTRING(DifficultyName);

        description = CSTRING(DifficultyDescription);
        optionDescription = CSTRING(DifficultyDescription);

        levelAI = QGVAR(LevelAI);

        class Options {
            // Simulation
            reducedDamage = 0;  // Reduced damage  (0 = disabled, 1 = enabled)

            // Situational awareness
            groupIndicators = 0; // Group indicators  (0 = never, 1 = limited distance, 2 = always)
            friendlyTags = 0;  // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
            enemyTags = 0;   // Enemy name tags  (0 = never, 1 = limited distance, 2 = always)
            detectedMines = 0;  // Detected mines  (0 = never, 1 = limited distance, 2 = always)
            commands = 0;   // Commands    (0 = never, 1 = fade out, 2 = always)
            waypoints = 0;   // Waypoints   (0 = never, 1 = fade out, 2 = always)
            tacticalPing = 0;  // Tactical Ping  (0 = disabled, 1 = enabled)

            // Personal awareness
            weaponInfo = 2;   // Weapon info   (0 = never, 1 = fade out, 2 = always)
            stanceIndicator = 2; // Stance indicator  (0 = never, 1 = fade out, 2 = always)
            staminaBar = 1;   // Stamina bar   (0 = disabled, 1 = enabled)
            weaponCrosshair = 0; // Weapon crosshair  (0 = disabled, 1 = enabled)
            visionAid = 0;   // Vision aid   (0 = disabled, 1 = enabled)

            // View
            thirdPersonView = 1; // 3rd person view  (0 = disabled, 1 = enabled)
            cameraShake = 1;  // Camera shake   (0 = disabled, 1 = enabled)

            // Multiplayer
            scoreTable = 0;   // Score table   (0 = disabled, 1 = enabled)
            deathMessages = 0;  // Killed by   (0 = disabled, 1 = enabled)
            vonID = 0;    // VON ID    (0 = disabled, 1 = enabled)

            // Misc
            mapContent = 1;   // Extended map content (0 = disabled, 1 = enabled) // before Arma 3 v1.68
            mapContentFriendly = 0; // Map friendlies  (0 = disabled, 1 = enabled) // since  Arma 3 v1.68
            mapContentEnemy = 0; // Map Enemies   (0 = disabled, 1 = enabled) // since  Arma 3 v1.68
            mapContentMines = 0; // Map Mines   (0 = disabled, 1 = enabled) // since  Arma 3 v1.68
            autoReport = 0;   // Automatic reporting (0 = disabled, 1 = enabled)
            multipleSaves = 0;  // Multiple saves  (0 = disabled, 1 = enabled)
        };
    };
};
