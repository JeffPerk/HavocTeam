#define MAINPREFIX z
#define PREFIX havoc

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define AUTHOR Havoc
#define QAUTHOR QUOTE(AUTHOR)

#define REQUIRED_VERSION 2.00

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(HAVOC - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(HAVOC - COMPONENT)
#endif

#define LOGO_PATH "\z\havoc\addons\media\images\havocl1512x.paa"
#define URL http://
#define NAME "Havoc"