class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class HAVOC_Folder {
                    items[] += {"havoc_Briefing"};
                };
                class HAVOC_Briefing {
                    text = "HAVOC Briefing Settings";
                    action = "edit3DENMissionAttributes 'HAVOC_MissionBriefingAttributes';";
                    //picture = "\z\havoc\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};