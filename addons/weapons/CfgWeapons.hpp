class CfgWeapons {
    class Man;
        class CAManBase : Man {
            minGunElev = -89;
            maxGunElev = 89;
        };
        
    class arifle_MX_Black_F;
    class CLASS(MX_BlackCamo): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(MX_BlackCamo);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blackcamo.paa),
            QPATHTOF(data\mx\xmx_short_co-blackcamo.paa)
        };
        baseWeapon = QCLASS(MX_BlackCamo);
    };

    class arifle_MX_GL_Black_F;
    class CLASS(MX_GL_BlackCamo): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(MX_GL_BlackCamo);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blackcamo.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_BlackCamo);
    };
/////////////////////////////////////
    class CLASS(MX_greenspray): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_greenspray);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greenspray.paa),
            QPATHTOF(data\mx\xmx_base_co-greenspray.paa)
        };
        baseWeapon = QCLASS(MX_greenspray);
    };
    class CLASS(MX_GL_greenspray): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_greenspray);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greenspray.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_greenspray);
    };

    class CLASS(MX_blackfine): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_blackfine);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blackfine.paa),
            QPATHTOF(data\mx\xmx_base_co-blackfine.paa)
        };
        baseWeapon = QCLASS(MX_blackfine);
    };
    class CLASS(MX_GL_blackfine): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_blackfine);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blackfine.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_blackfine);
    };

    class CLASS(MX_blackhex): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_blackhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blackhex.paa),
            QPATHTOF(data\mx\xmx_base_co-blackhex.paa)
        };
        baseWeapon = QCLASS(MX_blackhex);
    };
    class CLASS(MX_GL_blackhex): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_blackhex);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blackhex.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_blackhex);
    };

    class CLASS(MX_brownswirl): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_brownswirl);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-brownswirl.paa),
            QPATHTOF(data\mx\xmx_base_co-brownswirl.paa)
        };
        baseWeapon = QCLASS(MX_brownswirl);
    };
    class CLASS(MX_GL_brownswirl): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_brownswirl);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-brownswirl.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_brownswirl);
    };

    class CLASS(MX_dgreenpat): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_dgreenpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-dgreenpat.paa),
            QPATHTOF(data\mx\xmx_base_co-dgreenpat.paa)
        };
        baseWeapon = QCLASS(MX_dgreenpat);
    };
    class CLASS(MX_GL_dgreenpat): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_dgreenpat);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-dgreenpat.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_dgreenpat);
    };

    class CLASS(MX_greendig): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_greendig);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greendig.paa),
            QPATHTOF(data\mx\xmx_base_co-greendig.paa)
        };
        baseWeapon = QCLASS(MX_greendig);
    };
    class CLASS(MX_GL_greendig): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_greendig);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greendig.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_greendig);
    };

    class CLASS(MX_greenstrip): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_greenstrip);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greenstrip.paa),
            QPATHTOF(data\mx\xmx_base_co-greenstrip.paa)
        };
        baseWeapon = QCLASS(MX_greenstrip);
    };
    class CLASS(MX_GL_greenstrip): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_greenstrip);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greenstrip.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_greenstrip);
    };

    class CLASS(MX_greenx): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_greenx);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greenx.paa),
            QPATHTOF(data\mx\xmx_base_co-greenx.paa)
        };
        baseWeapon = QCLASS(MX_greenx);
    };
    class CLASS(MX_GL_greenx): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_greenx);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greenx.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_greenx);
    };

    class CLASS(MX_greyhex): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_greyhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greyhex.paa),
            QPATHTOF(data\mx\xmx_base_co-greyhex.paa)
        };
        baseWeapon = QCLASS(MX_greyhex);
    };
    class CLASS(MX_GL_greyhex): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_greyhex);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-greyhex.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_greyhex);
    };

    class CLASS(MX_snadpat): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_snadpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-snadpat.paa),
            QPATHTOF(data\mx\xmx_base_co-snadpat.paa)
        };
        baseWeapon = QCLASS(MX_snadpat);
    };
    class CLASS(MX_GL_snadpat): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_snadpat);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-snadpat.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_snadpat);
    };


/////////////////////////////////////
    class arifle_MXM_Black_F;
    class CLASS(MXM_greenspray): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_greenspray);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-greenspray.paa),
            QPATHTOF(data\mx\xmx_long_co-greenspray.paa)
        };
        baseWeapon = QCLASS(MXM_greenspray);
    };

    class CLASS(MXM_blackfine): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_blackfine);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-blackfine.paa),
            QPATHTOF(data\mx\xmx_long_co-blackfine.paa)
        };
        baseWeapon = QCLASS(MXM_blackfine);
    };

    class CLASS(MXM_blackhex): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_blackhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-blackhex.paa),
            QPATHTOF(data\mx\xmx_long_co-blackhex.paa)
        };
        baseWeapon = QCLASS(MXM_blackhex);
    };

    class CLASS(MXM_brownswirl): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_brownswirl);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-brownswirl.paa),
            QPATHTOF(data\mx\xmx_long_co-brownswirl.paa)
        };
        baseWeapon = QCLASS(MXM_brownswirl);
    };

    class CLASS(MXM_dgreenpat): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_dgreenpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-dgreenpat.paa),
            QPATHTOF(data\mx\xmx_long_co-dgreenpat.paa)
        };
        baseWeapon = QCLASS(MXM_dgreenpat);
    };

    class CLASS(MXM_greendig): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_greendig);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-greendig.paa),
            QPATHTOF(data\mx\xmx_long_co-greendig.paa)
        };
        baseWeapon = QCLASS(MXM_greendig);
    };

    class CLASS(MXM_greenstrip): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_greenstrip);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-greenstrip.paa),
            QPATHTOF(data\mx\xmx_long_co-greenstrip.paa)
        };
        baseWeapon = QCLASS(MXM_greenstrip);
    };

    class CLASS(MXM_greenx): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_greenx);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-greenx.paa),
            QPATHTOF(data\mx\xmx_long_co-greenx.paa)
        };
        baseWeapon = QCLASS(MXM_greenx);
    };

    class CLASS(MXM_greyhex): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_greyhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-greyhex.paa),
            QPATHTOF(data\mx\xmx_long_co-greyhex.paa)
        };
        baseWeapon = QCLASS(MXM_greyhex);
    };

    class CLASS(MXM_snadpat): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_snadpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-snadpat.paa),
            QPATHTOF(data\mx\xmx_long_co-snadpat.paa)
        };
        baseWeapon = QCLASS(MXM_snadpat);
    };

/////////////////////////////////////
    class arifle_MXC_Black_F;
    class CLASS(MXC_greenspray): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_greenspray);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-greenspray.paa),
            QPATHTOF(data\mx\xmx_short_co-greenspray.paa)
        };
        baseWeapon = QCLASS(MXC_greenspray);
    };

    class CLASS(MXC_blackfine): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_blackfine);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-blackfine.paa),
            QPATHTOF(data\mx\xmx_short_co-blackfine.paa)
        };
        baseWeapon = QCLASS(MXC_blackfine);
    };

    class CLASS(MXC_blackhex): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_blackhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-blackhex.paa),
            QPATHTOF(data\mx\xmx_short_co-blackhex.paa)
        };
        baseWeapon = QCLASS(MXC_blackhex);
    };

    class CLASS(MXC_brownswirl): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_brownswirl);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-brownswirl.paa),
            QPATHTOF(data\mx\xmx_short_co-brownswirl.paa)
        };
        baseWeapon = QCLASS(MXC_brownswirl);
    };

    class CLASS(MXC_dgreenpat): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_dgreenpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-dgreenpat.paa),
            QPATHTOF(data\mx\xmx_short_co-dgreenpat.paa)
        };
        baseWeapon = QCLASS(MXC_dgreenpat);
    };

    class CLASS(MXC_greendig): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_greendig);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-greendig.paa),
            QPATHTOF(data\mx\xmx_short_co-greendig.paa)
        };
        baseWeapon = QCLASS(MXC_greendig);
    };

    class CLASS(MXC_greenstrip): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_greenstrip);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-greenstrip.paa),
            QPATHTOF(data\mx\xmx_short_co-greenstrip.paa)
        };
        baseWeapon = QCLASS(MXC_greenstrip);
    };

    class CLASS(MXC_greenx): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_greenx);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-greenx.paa),
            QPATHTOF(data\mx\xmx_short_co-greenx.paa)
        };
        baseWeapon = QCLASS(MXC_greenx);
    };

    class CLASS(MXC_greyhex): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_greyhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-greyhex.paa),
            QPATHTOF(data\mx\xmx_short_co-greyhex.paa)
        };
        baseWeapon = QCLASS(MXC_greyhex);
    };

    class CLASS(MXC_snadpat): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_snadpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-snadpat.paa),
            QPATHTOF(data\mx\xmx_short_co-snadpat.paa)
        };
        baseWeapon = QCLASS(MXC_snadpat);
    };

/////////////////////////////////////
    class arifle_MX_SW_Black_F;
    class CLASS(MX_SW_greenspray): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_greenspray);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-greenspray.paa),
            QPATHTOF(data\mx\xmx_lmg_co-greenspray.paa)
        };
        baseWeapon = QCLASS(MX_SW_greenspray);
    };

    class CLASS(MX_SW_blackfine): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_blackfine);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-blackfine.paa),
            QPATHTOF(data\mx\xmx_lmg_co-blackfine.paa)
        };
        baseWeapon = QCLASS(MX_SW_blackfine);
    };

    class CLASS(MX_SW_blackhex): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_blackhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-blackhex.paa),
            QPATHTOF(data\mx\xmx_lmg_co-blackhex.paa)
        };
        baseWeapon = QCLASS(MX_SW_blackhex);
    };

    class CLASS(MX_SW_brownswirl): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_brownswirl);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-brownswirl.paa),
            QPATHTOF(data\mx\xmx_lmg_co-brownswirl.paa)
        };
        baseWeapon = QCLASS(MX_SW_brownswirl);
    };

    class CLASS(MX_SW_dgreenpat): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_dgreenpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-dgreenpat.paa),
            QPATHTOF(data\mx\xmx_lmg_co-dgreenpat.paa)
        };
        baseWeapon = QCLASS(MX_SW_dgreenpat);
    };

    class CLASS(MX_SW_greendig): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_greendig);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-greendig.paa),
            QPATHTOF(data\mx\xmx_lmg_co-greendig.paa)
        };
        baseWeapon = QCLASS(MX_SW_greendig);
    };

    class CLASS(MX_SW_greenstrip): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_greenstrip);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-greenstrip.paa),
            QPATHTOF(data\mx\xmx_lmg_co-greenstrip.paa)
        };
        baseWeapon = QCLASS(MX_SW_greenstrip);
    };

    class CLASS(MX_SW_greenx): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_greenx);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-greenx.paa),
            QPATHTOF(data\mx\xmx_lmg_co-greenx.paa)
        };
        baseWeapon = QCLASS(MX_SW_greenx);
    };

    class CLASS(MX_SW_greyhex): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_greyhex);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-greyhex.paa),
            QPATHTOF(data\mx\xmx_lmg_co-greyhex.paa)
        };
        baseWeapon = QCLASS(MX_SW_greyhex);
    };

    class CLASS(MX_SW_snadpat): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_snadpat);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-snadpat.paa),
            QPATHTOF(data\mx\xmx_lmg_co-snadpat.paa)
        };
        baseWeapon = QCLASS(MX_SW_snadpat);
    };

    class CLASS(MX_browndots): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_browndots);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-browndots.paa),
            QPATHTOF(data\mx\xmx_base_co-browndots.paa)
        };
        baseWeapon = QCLASS(MX_browndots);
    };
    class CLASS(MX_GL_browndots): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_browndots);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-browndots.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_browndots);
    };
    class CLASS(MX_brownsplash): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_brownsplash);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-brownsplash.paa),
            QPATHTOF(data\mx\xmx_base_co-brownsplash.paa)
        };
        baseWeapon = QCLASS(MX_brownsplash);
    };
    class CLASS(MX_GL_brownsplash): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_brownsplash);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-brownsplash.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_brownsplash);
    };
    class CLASS(MX_blacksploch): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_blacksploch);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blacksploch.paa),
            QPATHTOF(data\mx\xmx_base_co-blacksploch.paa)
        };
        baseWeapon = QCLASS(MX_blacksploch);
    };
    class CLASS(MX_GL_blacksploch): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_GL_blacksploch);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_co-blacksploch.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QCLASS(MX_GL_blacksploch);
    };

/////////////////////////////
    class CLASS(MXM_blackcamo): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_blackcamo);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-blackcamo.paa),
            QPATHTOF(data\mx\xmx_long_co-blackcamo.paa)
        };
        baseWeapon = QCLASS(MXM_jesus);
    };

    class CLASS(MXM_browndots): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_browndots);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-browndots.paa),
            QPATHTOF(data\mx\xmx_long_co-browndots.paa)
        };
        baseWeapon = QCLASS(MXM_browndots);
    };
    class CLASS(MXM_brownsplash): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_brownsplash);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-brownsplash.paa),
            QPATHTOF(data\mx\xmx_long_co-brownsplash.paa)
        };
        baseWeapon = QCLASS(MXM_brownsplash);
    };
    class CLASS(MXM_blacksploch): arifle_MXM_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXM_blacksploch);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_long_co-blacksploch.paa),
            QPATHTOF(data\mx\xmx_long_co-blacksploch.paa)
        };
        baseWeapon = QCLASS(MXM_blacksploch);
    };
    ///////////////////////////
    class CLASS(MXC_blackcamo): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_blackcamo);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-blackcamo.paa),
            QPATHTOF(data\mx\xmx_short_co-blackcamo.paa)
        };
        baseWeapon = QCLASS(MXC_blackcamo);
    };

    class CLASS(MXC_browndots): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_browndots);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-browndots.paa),
            QPATHTOF(data\mx\xmx_short_co-browndots.paa)
        };
        baseWeapon = QCLASS(MXC_browndots);
    };

    class CLASS(MXC_brownsplash): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_brownsplash);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-brownsplash.paa),
            QPATHTOF(data\mx\xmx_short_co-brownsplash.paa)
        };
        baseWeapon = QCLASS(MXC_brownsplash);
    };

    class CLASS(MXC_blacksploch): arifle_MXC_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MXC_blacksploch);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_short_co-blacksploch.paa),
            QPATHTOF(data\mx\xmx_short_co-blacksploch.paa)
        };
        baseWeapon = QCLASS(MXC_blacksploch);
    };
    ///////////////////////
    class CLASS(MX_SW_blackcamo): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_blackcamo);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-blackcamo.paa),
            QPATHTOF(data\mx\xmx_lmg_co-blackcamo.paa)
        };
        baseWeapon = QCLASS(MX_SW_jesus);
    };

    class CLASS(MX_SW_browndots): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_browndots);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-browndots.paa),
            QPATHTOF(data\mx\xmx_lmg_co-browndots.paa)
        };
        baseWeapon = QCLASS(MX_SW_browndots);
    };

    class CLASS(MX_SW_brownsplash): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_brownsplash);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-brownsplash.paa),
            QPATHTOF(data\mx\xmx_lmg_co-brownsplash.paa)
        };
        baseWeapon = QCLASS(MX_SW_brownsplash);
    };

    class CLASS(MX_SW_blacksploch): arifle_MX_SW_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = CSTRING(MX_SW_blacksploch);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_lmg_co-blacksploch.paa),
            QPATHTOF(data\mx\xmx_lmg_co-blacksploch.paa)
        };
        baseWeapon = QCLASS(MX_SW_blacksploch);
    };

///////////////////////////////////////
    class srifle_EBR_F;
    class CLASS(EBR_Black_F): srifle_EBR_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Tyrone";
        displayName = CSTRING(EBR_Black_F);
        picture = QPATHTOF(UI\mk14_ebr_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\m14_ebr01_blackcamo_co.paa),
            QPATHTOF(data\m14_ebr02_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(EBR_Black_F);
    };

    class arifle_Mk20_plain_F;
    class CLASS(Mk20_Black_F): arifle_Mk20_plain_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Tyrone";
        displayName = CSTRING(Mk20_Black_F);
        picture = QPATHTOF(UI\mk20_blackcamo_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mk20_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(Mk20_Black_F);
    };

    class hgun_P07_F;
    class CLASS(Walther_P99): hgun_P07_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "JoramD";
        displayName = CSTRING(Walther_P99);
        picture = QPATHTOF(UI\walther_p99_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_co.paa)};
        baseWeapon = QCLASS(Walther_P99);
    };

    class CLASS(hgun_P07_blk_F) : hgun_P07_F {
        author = "nopryl.no";
        baseWeapon = QCLASS(hgun_P07_blk_F);
        //displayName = "P07 9 mm (Black)";
        displayName = "P99 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pistol\p07.paa)};
    };

    class CLASS(Walther_P99_Tan): CLASS(Walther_P99) {
        displayName = CSTRING(Walther_P99_Tan);
        picture = QPATHTOF(UI\walther_p99_tan_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_tan_co.paa)};
        baseWeapon = QCLASS(Walther_P99_Tan);
    };

    class launch_MRAWS_green_F;
    class CLASS(MRAWS_Black_F): launch_MRAWS_green_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_F);
        picture = QPATHTOF(UI\mraws_black_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
        };
        baseWeapon = QCLASS(MRAWS_Black_F);
    };

    class launch_MRAWS_green_rail_F;
    class CLASS(MRAWS_Black_Rail_F): launch_MRAWS_green_rail_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_Rail_F);
        picture = QPATHTOF(UI\mraws_black_rail_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
        };
        baseWeapon = QCLASS(MRAWS_Black_Rail_F);
    };

    class LMG_03_F;
    class CLASS(LMG_03_brn_F) : LMG_03_F {
        author = "nopryl.no";
        baseWeapon = QCLASS(LMG_03_brn_F),;
        //displayName = "LIM-85 5.56 mm (Brown)";
        displayName = "FN Minimi SPW (Brown)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\lmg\minimi_01.paa),
            QPATHTOF(data\lmg\minimi_02.paa),
            "\A3\weapons_f\machineguns\m200\data\grip_co.paa"
        };
    };

    // Equipped
    class CLASS(MX_BlackCamo_MRCO): CLASS(MX_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };

    class CLASS(MX_BlackCamo_ACO): CLASS(MX_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_aco";
            };
        };
    };

    class CLASS(MX_GL_BlackCamo_ACO): CLASS(MX_GL_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_aco";
            };
        };
    };
};
