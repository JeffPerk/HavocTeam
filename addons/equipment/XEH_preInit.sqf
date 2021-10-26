#include "script_component.hpp"

ADDON = false;

if (isNil QEGVAR(common,Havoc_enabled) || !(EGVAR(common,Havoc_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
