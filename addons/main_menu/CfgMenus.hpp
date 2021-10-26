class EMM_mainMenu_CfgMenus {
    class VN {
        class menus {
            class MainMenu;
            class MultiplayerVN: MainMenu {
                items[] = {"Havoc", "ServerBrowser", "SOGPrairieFire", "MikeForce", "Exit"};

                class ServerBrowser;
                class Havoc: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join)));
                    text = CSTRING(SpotlightHeader);
                };
            };
        };
    };
};