#include "script_component.hpp"
/*
 * Author: 3Mydlo3
 * Function removes savegame data
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call havoc_back_to_game_fnc_dialogReject
 *
 * Public: No
 */

INFO("Teleportation rejected!");

[{
    GVAR(savegameData) = [];
}] call CBA_fnc_execNextFrame;

nil
