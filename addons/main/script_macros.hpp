#include "\x\cba\addons\main\script_macros_common.hpp"
#define DFUNC(module) TRIPLES(ADDON,fnc,module)
#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// ACE3 reference macros
#define ACE_PREFIX ace

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

// HAVOC macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Extension macros
#define EXT "havoc_mods"
#define EXT_LOG "havoc_mods_log"

// HAVOC Debug macros
#include "\z\havoc\addons\main\script_debug.hpp"

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
