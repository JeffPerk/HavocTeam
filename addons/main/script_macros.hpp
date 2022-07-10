#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\z\ace\addons\main\script_macros.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#include "script_version.hpp"


#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif


#define ACE_MASSTOKG(x) ((round ((x) * 0.1 * (1/2.2046) * 100)) / 100)

// XEH templates
#define XEH_POSTINIT                                    \
class Extended_PostInit_EventHandlers {                 \
    class ADDON {                                       \
        init = QUOTE( call COMPILE_FILE(XEH_postInit) );\
    };                                                  \
}

#define XEH_PREINIT                                    \
class Extended_PreInit_EventHandlers {                 \
    class ADDON {                                      \
        init = QUOTE( call COMPILE_FILE(XEH_preInit) );\
    };                                                 \
}

#define XEH_PRESTART                                    \
class Extended_PreStart_EventHandlers {                 \
    class ADDON {                                       \
        init = QUOTE( call COMPILE_FILE(XEH_preStart) );\
    };                                                  \
}

// Expanding on CBA macros
#define CFUNC(var) EFUNC(common,var)
#define QCFUNC(var) QUOTE(CFUNC(var))

// Chat macros
#define IS_CMND_AVAILABLE(var,cmnd) if !([var,cmnd] call EFUNC(chat,commandAvailable)) exitWith {}

// ACE3 reference macros
#define ACE_PREFIX ace
#define ACE_ADDON(module) DOUBLES(ACE_PREFIX,module)
#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

#define GVAR(var1) DOUBLES(ADDON,var1)
#define EGVAR(var1,var2) TRIPLES(PREFIX,var1,var2)
#define QGVAR(var1) QUOTE(GVAR(var1))
#define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))
#define QQGVAR(var1) QUOTE(QGVAR(var1))
#define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))

#define GVARMAIN(var1) GVARMAINS(PREFIX,var1)
#define QGVARMAIN(var1) QUOTE(GVARMAIN(var1))
#define QQGVARMAIN(var1) QUOTE(QGVARMAIN(var1))

// havoc macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// havoc Debug macros
#include "\z\havoc\addons\main\script_debug.hpp"

// Path
#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

#define PATHTOR_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOR(var1) PATHTOR_SYS(PREFIX,COMPONENT,var1)
#define PATHTOER(var1,var2) PATHTOR_SYS(PREFIX,var1,var2)
#define QPATHTOR(var1) QUOTE(PATHTOR(var1))
#define QPATHTOER(var1,var2) QUOTE(PATHTOER(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
//#define QGVAR(var1) QUOTE(DOUBLES(PREFIX,var1))

// Internal
/* #define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3 */
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define QUOTE(var1) #var1
#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))


// Items
#define ITEMS_2(var) QUOTE(var), QUOTE(var)
#define ITEMS_3(var) QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_4(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_5(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_6(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_7(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_8(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_9(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_10(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_11(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_12(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)

#define ITEM01(id) id
#define ITEM02(id) id,id
#define ITEM03(id) id,id,id
#define ITEM04(id) id,id,id,id
#define ITEM05(id) id,id,id,id,id
#define ITEM06(id) id,id,id,id,id,id
#define ITEM07(id) id,id,id,id,id,id,id
#define ITEM08(id) id,id,id,id,id,id,id,id
#define ITEM09(id) id,id,id,id,id,id,id,id,id
#define ITEM10(id) id,id,id,id,id,id,id,id,id,id
#define ITEM11(id) id,id,id,id,id,id,id,id,id,id,id
#define ITEM12(id) id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM13(id) id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM14(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM15(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM16(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM17(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM18(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM19(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM20(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM30(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id


#define MACRO_ADDWEAPON(WEAPON,COUNT) \
    class _xx_##WEAPON { \
        weapon = #WEAPON; \
        count = COUNT; \
    }

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) \
    class _xx_##MAGAZINE { \
        magazine = #MAGAZINE; \
        count = COUNT; \
    }

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) \
    class _xx_##BACKPACK { \
        backpack = #BACKPACK; \
        count = COUNT; \
    }

#define MACRO_LANDVEHICLE_CARGO \
    class TransportBackpacks {}; \
    class TransportItems { \
        MACRO_ADDITEM(FirstAidKit,8); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(SmokeShell,6); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(SmokeShellRed,2); \
    }; \
    class TransportWeapons {};

#define MACRO_AIRVEHICLE_CARGO \
    class TransportBackpacks { \
        MACRO_ADDBACKPACK(B_Parachute,2); \
    }; \
    class TransportItems { \
        MACRO_ADDITEM(FirstAidKit,8); \
        MACRO_ADDITEM(ItemGPS,1); \
        MACRO_ADDITEM(ToolKit,1); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(SmokeShell,6); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(SmokeShellRed,2); \
    }; \
    class TransportWeapons {};

////////////////////////////////////////////////////////////////////////////////
// LOADOUT DEFINES

#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

#define LOADOUT_ITEM(id, qty) \
class _xx_##id { \
    type = #id; \
    count = qty; \
};

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}


#define GETPRVAR(var1,var2) (profileNamespace getVariable [ARR_2(var1,var2)])
#define SETPRVAR(var1,var2) (profileNamespace setVariable [ARR_2(var1,var2)])

#define FUNC_PATHTO_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\functions\var3.sqf

#define RESUPPLY_TEXT "Spawns in x amount of predefined magazines (not x total!)."
#define RESUPPLY_DESC "Used for the 'Spawn Ammo Resupply Crate' module. Must be an array of strings."

#define MAGAZINES_DESC "Magazines"

