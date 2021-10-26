#include "script_component.hpp"
/*
 * Author: DerZade
 * Removes item from unit's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Item/magazine/weapon classname <STRING>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player,"FirstAidKit",3] call HAVOC_boc_fnc_removeItemFromChestpack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]], ["_item","",[""]], ["_amount",1,[0]] ];

if (isNull _unit || _item isEqualTo "" || _amount < 1) exitWith {};

if ([_unit] call FUNC(chestpack) isEqualTo "") exitWith {};

// exit if there is no such item in chestpack
if ([_unit] call FUNC(chestpackItems) find _item isEqualTo -1) exitWith {};

[_unit, [_item, (-1)*_amount]] call FUNC(modifyItemAmount);
