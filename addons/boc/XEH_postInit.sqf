#include "script_component.hpp"

if (isNil QEGVAR(common,HAVOC_enabled) || !(EGVAR(common,HAVOC_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

HAVOC_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance HAVOC_unit) == "PRONE" &&
        {HAVOC_unit getvariable [QGVAR(preventProne),false]} &&
        {!(HAVOC_unit getVariable ["ACE_isUnconscious", false]) || lifeState HAVOC_unit != "INCAPACITATED"}
       ) then {
        HAVOC_unit playAction "PlayerCrouch";
        hint localize "STR_HAVOC_BOC_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
