#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = "HAVOC: Briefing";
        author = "Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"havoc_common"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgDiary.hpp"
#include "CfgEventHandlers.hpp"

#include "display3DEN.hpp"

/* class HAVOC_autotest {
    class GVAR(test) {
        code = QUOTE([] call FUNC(testBriefings));
    };
};
 */