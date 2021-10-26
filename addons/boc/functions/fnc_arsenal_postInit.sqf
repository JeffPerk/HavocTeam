#include "script_component.hpp"
/*
 * Author: DerZade
 * Called by postInit. Adds local "arsenalOpened" scriptedEventhandler.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [] call HAVOC_boc_fnc_arsenal_postInit;
 *
 * Public: No
 */
if !(hasInterface) exitWith {};

[missionNamespace, "arsenalOpened", FUNC(arsenal_opened)] call BIS_fnc_addScriptedEventHandler;

//["ACE_arsenal_displayOpened", {QFUNC(arsenal_opened) call CBA_fnc_localEvent}] call CBA_fnc_addEventHandler;
