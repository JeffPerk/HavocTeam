#include "script_component.hpp"
/*
 * File: \CfgGroups.hpp
 * Project: main
 * Github: https://github.com/HAVOC/ARMA_Mod
 * Created Date: Monday, May 11th 2020, 1:03:52 am
 * Author: YonV at <yonvclaw@gmail.com>
 * -----
 * Last Modified: Tue May 19 2020
 * Modified By: YonV
 * -----
 * Copyright (c) 2020 HAVOC
 *
 * Arma Public License Share Alike (APL-SA),
 * All shall be well and all shall be well and all manner of things shall be well.
 * Nope...we're doomed!
 * -----
 * HISTORY:
 * Date      	By	Comments
 * ----------	---	----------------------------------------------------------
 */

class CfgGroups {
    class WEST {

        class PREFIX {
            name = "HAVOC";

            class Infantry {
                name = "Infantry";

            };

            class SpecOps {
                name = "Special Forces";

                class HAVOC_Default_Squad {
                    name = "Default";
                    side = 1;
                    faction = QUOTE(PREFIX);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(socom);
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(socom);
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(socom);
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(socom);
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(socom);
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(socom);
                    };
                };

                class HAVOC_flight_crew_2person {
                    name = "flight crew (2 person)";
                    side = 1;
                    faction = QUOTE(PREFIX);
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(helipilot);
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(helipilot);
                    };
                };

                class HAVOC_flight_crew_4 {
                    name = "flight crew (4 person)";
                    side = 1;
                    faction = QUOTE(PREFIX);
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(helipilot);
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(helipilot);
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(helipilot);
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = QGVAR(helipilot);
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };
        };

    };
};
