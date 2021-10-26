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
    /*class Bear {
        uid = "12345";
    };*/
};

#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"

#include "gui\adminMenu.hpp"
