#include "script_component.hpp"
/*
 * Author: DerZade
 * Removes all items (includes weapons and magazines) from a unit's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call HAVOC_boc_fnc_clearAllItemsFromChestpack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];

if (isNull _unit) exitWith {};

if ([_unit] call FUNC(chestpack) isEqualTo "") exitWith {};

[_unit, []] call FUNC(setChestpackLoadout);
