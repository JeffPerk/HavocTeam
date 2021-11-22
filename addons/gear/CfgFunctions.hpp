class CfgFunctions {

    class havoc_Gear {

        tag = "havoc_gear";

        class Gear {
            file = "\z\havoc\addons\gear\functions";
            class initialize {};
            class initSettings {};
        };

        class Common {
            file = "\z\havoc\addons\gear\functions\common";
            class initPlayer {};
            class removeAll {};
            class restore {};
            class set {};
            class store {};
        };

        class Load {
            file = "\z\havoc\addons\gear\functions\load";
            class load {};
            class load_loadout {};
            class load_properties {};
        };

    };

};
