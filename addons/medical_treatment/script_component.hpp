#define COMPONENT medical_treatment
#define COMPONENT_BEAUTIFIED Medical_Treatment
#include "\z\havoc\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MEDICAL_TREATMENT
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_MEDICAL_TREATMENT
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MEDICAL_TREATMENT
#endif

#include "\z\havoc\addons\main\script_macros.hpp"

// The best choice for given wound
#define SUPER_EFF_BASE \
    reopeningChance = 0.1; \
    reopeningMinDelay = 600; \
    reopeningMaxDelay = 1800

#define SUPER_EFF \
    effectiveness = 10; \
    SUPER_EFF_BASE

#define SUPER_EFF_MINOR SUPER_EFF

#define SUPER_EFF_MEDIUM \
    effectiveness = 9; \
    SUPER_EFF_BASE

#define SUPER_EFF_LARGE \
    effectiveness = 8; \
    SUPER_EFF_BASE


// Will fix you almost like super
#define INCREASED_EFF_BASE \
    reopeningChance = 0.3; \
    reopeningMinDelay = 400; \
    reopeningMaxDelay = 1200

#define INCREASED_EFF \
    effectiveness = 6; \
    INCREASED_EFF_BASE

#define INCREASED_EFF_MINOR INCREASED_EFF

#define INCREASED_EFF_MEDIUM \
    effectiveness = 5; \
    INCREASED_EFF_BASE

#define INCREASED_EFF_LARGE \
    effectiveness = 4; \
    INCREASED_EFF_BASE


// Still 2-3 times more efficiency than default ACE bandages
#define STANDARD_EFF_BASE \
    reopeningChance = 0.4; \
    reopeningMinDelay = 300; \
    reopeningMaxDelay = 600

#define STANDARD_EFF \
    effectiveness = 4; \
    STANDARD_EFF_BASE

#define STANDARD_EFF_MINOR STANDARD_EFF

#define STANDARD_EFF_MEDIUM \
    effectiveness = 3; \
    STANDARD_EFF_BASE

#define STANDARD_EFF_LARGE \
    effectiveness = 2; \
    STANDARD_EFF_BASE
