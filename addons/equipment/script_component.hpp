#define COMPONENT equipment
#define COMPONENT_BEAUTIFIED Equipment

#ifdef DEBUG_ENABLED_EQUIPMENT
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_EQUIPMENT
    #define DEBUG_SETTINGS DEBUG_SETTINGS_EQUIPMENT
#endif

#define DEBUG_MODE_NORMAL
#define DEBUG_SYNCHRONOUS

#include "\z\havoc\addons\main\script_mod.hpp"
#include "\z\havoc\addons\main\script_macros.hpp"