#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "HAVOC: Admin Menu";
        author = "Bear, Snippers";
        url = "http://www.teamonehavoctical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_common", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class YonV {
        uid = "76561198000002705";
    };
    class walker {
        uid = "76561198082803436";
    };
    class Novisky {
        uid = "76561198388589999";
    };
};



#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"

#include "gui\adminMenu.hpp"
