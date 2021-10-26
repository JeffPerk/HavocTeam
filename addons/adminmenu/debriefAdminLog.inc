/*
    Author: Freddo

    Creates a debriefing section for admins containing all
    log messasges sent during the mission.
    Displayed in mission debriefing screen.

    Include this file in description.ext of your mission

    Example:
    class CfgDebriefingSections {
        #include "\z\havoc\addons\adminmenu\debriefAdminLog.inc"
    };
*/

class havoc_adminlog
{
    title = "HAVOC Log";
    variable = "HAVOC_adminmenu_debrief";
};
