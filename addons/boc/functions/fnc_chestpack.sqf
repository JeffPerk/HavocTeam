#include "script_component.hpp"
/*
 * Author: DerZade
 * Returns the classname of a unit's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Classname <STRING>
 *
 * Example:
 * [player] call HAVOC_boc_fnc_chestpack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];
private ["_var"];

if (isNull _unit) exitWith {};

_var = _unit getVariable [QGVAR(chestpack),[[""]]];
(_var select 0) select 0;
