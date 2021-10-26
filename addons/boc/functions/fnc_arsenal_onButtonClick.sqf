#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggered by the onButtonClick-EventHandler.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [] call HAVOC_boc_fnc_arsenal_onButtonClick;
 *
 * Public: No
 */
private ["_center","_chestpack","_backpack","_action"];

_center = missionnamespace getvariable ["BIS_fnc_arsenal_center", player];
_chestpack = [_center] call FUNC(chestpack);
_backpack = backpack _center;
_action = ["onback", "onchest"] select (_chestpack isEqualTo "");

if (!(_backpack isEqualTo "") and !(_chestpack isEqualTo "")) then {_action = "swap";};

//execute action
[_center] call (missionNamespace getVariable (format ["HAVOC_boc_fnc_action%1",_action]));

//update arsenal
["ListSelectCurrent"] call BIS_fnc_arsenal;
