class CfgFactionClasses {    
    class NO_CATEGORY;

    class HAVOC: NO_CATEGORY {
        displayName = PREFIX;
    };
    class PREFIX: NO_CATEGORY {
        displayName = "Havoc"; //Faction name in-game
        icon = LOGO_PATH;
        priority = 0;
        side = 1; // 1 Blufor 2 opfor 3 independant i think.
    };
    class HAVOC_Modules: NO_CATEGORY {
        displayName = PREFIX;
    };
};