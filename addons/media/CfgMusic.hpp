class CfgMusic {

    tracks[] = {};
    class Denied {
        name  = "Denied";
        sound[]  = { "z\havoc\addons\media\Sounds\Denied.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };

    class AirRaid {
        name  = "AirRaid";
        sound[]  = { "z\havoc\addons\media\Sounds\AirRaid.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };

    class NukeAlarm {
        name  = "NukeAlarm";
        sound[]  = { "z\havoc\addons\media\Sounds\NukeAlarm.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };

    class Windows {
        name  = "Windows";
        sound[]  = { "z\havoc\addons\media\Sounds\Windows.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };
};
class CfgMusicClasses {

    class Tears_of_the_sun {
        displayName = "Tears of the Sun";
    };

    class Horror {
        displayName = "Horror";
    };

    class Misc {
        displayName = "Sonstiges";
    };

    class Contact {
        displayName = "Contact";
    };
};

class CfgMusic {
    tracks[]={};
    #include "Music\Horror\CfgMusic_Horror.hpp"
    #include "Music\Tears_of_the_Sun\CfgMusic_TotS.hpp"
    #include "Music\Misc\CfgMusic_Misc.hpp"
    #include "Music\Contact\CfgMusic_Contact.hpp"
};