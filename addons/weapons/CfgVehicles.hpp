#include "script_component.hpp"
class CfgVehicles {
    // Ground items
    #define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2;

    class Weapon_Base_F;
    class CLASS(Item_MX_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Jonpas";
        displayName = CSTRING(MX_BlackCamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_BlackCamo),1);
        };
    };
    class CLASS(Item_MX_GL_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Jonpas";
        displayName = CSTRING(MX_GL_BlackCamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_BlackCamo),1);
        };
    };
//////////////////////////////
    class CLASS(Item_MX_greenspray): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_greenspray);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_greenspray),1);
        };
    };
    class CLASS(Item_MX_GL_greenspray): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_greenspray);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_greenspray),1);
        };
    };

    class CLASS(Item_MX_blackfine): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_blackfine);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_blackfine),1);
        };
    };
    class CLASS(Item_MX_GL_blackfine): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_blackfine);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_blackfine),1);
        };
    };

    class CLASS(Item_MX_blackhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_blackhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_blackhex),1);
        };
    };
    class CLASS(Item_MX_GL_blackhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_blackhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_blackhex),1);
        };
    };

    class CLASS(Item_MX_brownswirl): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_brownswirl);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_brownswirl),1);
        };
    };
    class CLASS(Item_MX_GL_brownswirl): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_brownswirl);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_brownswirl),1);
        };
    };

    class CLASS(Item_MX_dgreenpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_dgreenpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_dgreenpat),1);
        };
    };
    class CLASS(Item_MX_GL_dgreenpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_dgreenpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_dgreenpat),1);
        };
    };

    class CLASS(Item_MX_greendig): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_greendig);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_greendig),1);
        };
    };
    class CLASS(Item_MX_GL_greendig): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_greendig);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_greendig),1);
        };
    };


    class CLASS(Item_MX_greenstrip): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_greenstrip);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_greenstrip),1);
        };
    };
    class CLASS(Item_MX_GL_greenstrip): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_greenstrip);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_greenstrip),1);
        };
    };

    class CLASS(Item_MX_greenx): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_greenx);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_greenx),1);
        };
    };
    class CLASS(Item_MX_GL_greenx): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_greenx);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_greenx),1);
        };
    };

    class CLASS(Item_MX_greyhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_greyhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_greyhex),1);
        };
    };
    class CLASS(Item_MX_GL_greyhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_greyhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_greyhex),1);
        };
    };

    class CLASS(Item_MX_snadpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_snadpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_snadpat),1);
        };
    };
    class CLASS(Item_MX_GL_snadpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_snadpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_snadpat),1);
        };
    };

//////////////////////////////
    class CLASS(Item_MXM_greenspray): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_greenspray);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_greenspray),1);
        };
    };
    class CLASS(Item_MXM_blackfine): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_blackfine);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_blackfine),1);
        };
    };

    class CLASS(Item_MXM_blackhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_blackhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_blackhex),1);
        };
    };

    class CLASS(Item_MXM_brownswirl): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_brownswirl);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_brownswirl),1);
        };
    };

    class CLASS(Item_MXM_dgreenpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_dgreenpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_dgreenpat),1);
        };
    };

    class CLASS(Item_MXM_greendig): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_greendig);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_greendig),1);
        };
    };

    class CLASS(Item_MXM_HAVOC): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_HAVOC);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_HAVOC),1);
        };
    };

    class CLASS(Item_MXM_greenstrip): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_greenstrip);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_greenstrip),1);
        };
    };

    class CLASS(Item_MXM_greenx): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_greenx);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_greenx),1);
        };
    };

    class CLASS(Item_MXM_greyhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_greyhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_greyhex),1);
        };
    };

    class CLASS(Item_MXM_snadpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_snadpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_snadpat),1);
        };
    };

//////////////////////////////
    class CLASS(Item_MXC_greenspray): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_greenspray);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_greenspray),1);
        };
    };
    class CLASS(Item_MXC_blackfine): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_blackfine);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_blackfine),1);
        };
    };

    class CLASS(Item_MXC_blackhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_blackhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_blackhex),1);
        };
    };

    class CLASS(Item_MXC_brownswirl): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_brownswirl);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_brownswirl),1);
        };
    };

    class CLASS(Item_MXC_dgreenpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_dgreenpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_dgreenpat),1);
        };
    };

    class CLASS(Item_MXC_greendig): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_greendig);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_greendig),1);
        };
    };

    class CLASS(Item_MXC_HAVOC): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_HAVOC);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_HAVOC),1);
        };
    };

    class CLASS(Item_MXC_greenstrip): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_greenstrip);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_greenstrip),1);
        };
    };

    class CLASS(Item_MXC_greenx): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_greenx);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_greenx),1);
        };
    };

    class CLASS(Item_MXC_greyhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_greyhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_greyhex),1);
        };
    };

    class CLASS(Item_MXC_snadpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_snadpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_snadpat),1);
        };
    };
//////////////////////////////
    class CLASS(Item_MX_SW_greenspray): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_greenspray);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_greenspray),1);
        };
    };
    class CLASS(Item_MX_SW_blackfine): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_blackfine);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_blackfine),1);
        };
    };

    class CLASS(Item_MX_SW_blackhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_blackhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_blackhex),1);
        };
    };

    class CLASS(Item_MX_SW_brownswirl): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_brownswirl);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_brownswirl),1);
        };
    };

    class CLASS(Item_MX_SW_dgreenpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_dgreenpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_dgreenpat),1);
        };
    };

    class CLASS(Item_MX_SW_greendig): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_greendig);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_greendig),1);
        };
    };

    class CLASS(Item_MX_SW_HAVOC): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_HAVOC);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_HAVOC),1);
        };
    };

    class CLASS(Item_MX_SW_greenstrip): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_greenstrip);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_greenstrip),1);
        };
    };

    class CLASS(Item_MX_SW_greenx): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_greenx);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_greenx),1);
        };
    };

    class CLASS(Item_MX_SW_greyhex): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_greyhex);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_greyhex),1);
        };
    };

    class CLASS(Item_MX_SW_snadpat): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_snadpat);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_snadpat),1);
        };
    };

    class CLASS(Item_MX_browndots): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_browndots);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_browndots),1);
        };
    };
    class CLASS(Item_MX_GL_browndots): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_browndots);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_browndots),1);
        };
    };

    class CLASS(Item_MX_brownsplash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_brownsplash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_brownsplash),1);
        };
    };
    class CLASS(Item_MX_GL_brownsplash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_brownsplash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_brownsplash),1);
        };
    };

    class CLASS(Item_MX_blacksploch): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_blacksploch);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_blacksploch),1);
        };
    };
    class CLASS(Item_MX_GL_blacksploch): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_blacksploch);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_blacksploch),1);
        };
    };
    ///////////////////////////
    class CLASS(Item_MXM_blackcamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_blackcamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_blackcamo),1);
        };
    };
    class CLASS(Item_MXM_jesus): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_jesus);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_jesus),1);
        };
    };
    class CLASS(Item_MXM_yonv): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_yonv);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_yonv),1);
        };
    };

    class CLASS(Item_MXM_browndots): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_browndots);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_browndots),1);
        };
    };

    class CLASS(Item_MXM_brownsplash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_brownsplash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_brownsplash),1);
        };
    };

    class CLASS(Item_MXM_blacksploch): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_blacksploch);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_blacksploch),1);
        };
    };
    ////////////////
    class CLASS(Item_MXC_blackcamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_blackcamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_blackcamo),1);
        };
    };
    class CLASS(Item_MXC_jesus): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_jesus);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_jesus),1);
        };
    };
    class CLASS(Item_MXC_yonv): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_yonv);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_yonv),1);
        };
    };

    class CLASS(Item_MXC_browndots): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_browndots);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_browndots),1);
        };
    };

    class CLASS(Item_MXC_brownsplash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_brownsplash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_brownsplash),1);
        };
    };

    class CLASS(Item_MXC_blacksploch): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_blacksploch);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_blacksploch),1);
        };
    };
    ////////////////////
    class CLASS(Item_MX_SW_blackcamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_blackcamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_blackcamo),1);
        };
    };
   class CLASS(Item_MX_SW_jesus): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_jesus);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_jesus),1);
        };
    };
    class CLASS(Item_MX_SW_yonv): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_yonv);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_yonv),1);
        };
    };

    class CLASS(Item_MX_SW_browndots): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_browndots);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_browndots),1);
        };
    };

    class CLASS(Item_MX_SW_brownsplash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_brownsplash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_brownsplash),1);
        };
    };

    class CLASS(Item_MX_SW_blacksploch): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_blacksploch);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_blacksploch),1);
        };
    };
//////////////////////////////
    class CLASS(Item_EBR_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Tyrone";
        displayName = CSTRING(EBR_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(EBR_Black_F),1);
        };
    };
    class CLASS(Item_Mk20_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Tyrone";
        displayName = CSTRING(Mk20_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Mk20_Black_F),1);
        };
    };
    class Pistol_Base_F;
    class CLASS(Item_Walther_P99): Pistol_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsHandguns";
        author = "JoramD";
        displayName = CSTRING(Walther_P99);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Walther_P99),1);
        };
    };
    class CLASS(Item_Walther_P99_Tan): CLASS(Item_Walther_P99) {
        displayName = CSTRING(Walther_P99_Tan);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Walther_P99_Tan),1);
        };
    };

    class Launcher_Base_F;
    class CLASS(Item_MRAWS_Black_F): Launcher_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsSecondary";
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MRAWS_Black_F),1);
        };
    };
    class CLASS(Item_MRAWS_Black_Rail_F): Launcher_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsSecondary";
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_Rail_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MRAWS_Black_Rail_F),1);
        };
    };


    // Box
    class Box_NATO_Wps_F;
    class CLASS(Box_Weapons): Box_NATO_Wps_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Box_Weapons);

        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {
            MACRO_ADDWEAPON(CLASS(MX_BlackCamo),10);
            MACRO_ADDWEAPON(CLASS(MX_GL_BlackCamo),10);
            MACRO_ADDWEAPON(CLASS(Walther_P99),10);
            MACRO_ADDWEAPON(CLASS(Walther_P99_Tan),10);
        };

        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };
    
/////////////////////////////////////////
    class CLASS(Item_MX_brush): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_brush);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_brush),1);
        };
    };
    class CLASS(Item_MX_GL_brush): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_brush);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_brush),1);
        };
    };
    class CLASS(Item_MX_SW_brush): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_brush);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_brush),1);
        };
    };
    class CLASS(Item_MXC_brush): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_brush);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_brush),1);
        };
    };
    class CLASS(Item_MXM_brush): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_brush);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_brush),1);
        };
    };


/////////////////////////////////////////
    class CLASS(Item_MX_yonv2): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_yonv2);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_yonv2),1);
        };
    };
    class CLASS(Item_MX_GL_yonv2): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_yonv2);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_yonv2),1);
        };
    };
    class CLASS(Item_MX_SW_yonv2): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_yonv2);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_yonv2),1);
        };
    };
    class CLASS(Item_MXC_yonv2): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_yonv2);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_yonv2),1);
        };
    };
    class CLASS(Item_MXM_yonv2): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_yonv2);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_yonv2),1);
        };
    };



/////////////////////////////////////////
    class CLASS(Item_MX_trash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_trash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_trash),1);
        };
    };
    class CLASS(Item_MX_GL_trash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_GL_trash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_trash),1);
        };
    };
    class CLASS(Item_MX_SW_trash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MX_SW_trash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_trash),1);
        };
    };
    class CLASS(Item_MXC_trash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXC_trash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_trash),1);
        };
    };
    class CLASS(Item_MXM_trash): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "YonV";
        displayName = CSTRING(MXM_trash);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_trash),1);
        };
    };


/////////////////////////////////////////
    class CLASS(Item_MX_walker): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "walker";
        displayName = CSTRING(MX_walker);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_walker),1);
        };
    };
    class CLASS(Item_MX_GL_walker): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "walker";
        displayName = CSTRING(MX_GL_walker);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_walker),1);
        };
    };
    class CLASS(Item_MX_SW_walker): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "walker";
        displayName = CSTRING(MX_SW_walker);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_SW_walker),1);
        };
    };
    class CLASS(Item_MXC_walker): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "walker";
        displayName = CSTRING(MXC_walker);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXC_walker),1);
        };
    };
    class CLASS(Item_MXM_walker): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "walker";
        displayName = CSTRING(MXM_walker);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MXM_walker),1);
        };
    };
};

