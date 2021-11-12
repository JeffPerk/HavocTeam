#define COMPONENT units
#define COMPONENT_BEAUTIFIED Units
#include "\z\havoc\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_UNITS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_UNITS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_UNITS
#endif

#include "\z\havoc\addons\main\script_macros.hpp"

#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch"

#define RANDOM_GEAR(var) (GVAR(randomGear) getVariable [#var,[]])