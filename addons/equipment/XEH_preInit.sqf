#include "script_component.hpp"

ADDON = false;

if (isNil QEGVAR(common,HAVOC_enabled) || !(EGVAR(common,HAVOC_enabled))) exitWith {};


ADDON = true;
