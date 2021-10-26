#include "script_component.hpp"
/*
 * Author: DerZade
 * Called when backpack of arsenal unit changes. Updates Button icon / tooltip.
 *
 * Arguments:
 * 0: Arsenal Display <DISPLAY>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_disp] call HAVOC_boc_fnc_arsenal_updateUI);
 *
 * Public: No
 */
disableSerialization;
params ["_display"];
private ["_center","_chestpack","_backpack","_action"];

if (_display isEqualType controlNull) exitWith {  // the onSelChanged EH calls before the actual backpack changed so we have to wait a little bit
    [ctrlParent _display] spawn {sleep 0.05; _this call FUNC(arsenal_updateUI)};
};

// the arsenal unit
_center = missionnamespace getvariable ["BIS_fnc_arsenal_center",player];

_chestpack = [_center] call FUNC(chestpack);
_backpack = backpack _center;

_action = ["onBack", "onChest"] select (_chestpack isEqualTo "");
if (!(_backpack isEqualTo "") and !(_chestpack isEqualTo "")) then {_action = "swap";};

(_display displayCtrl 9233) ctrlSetText format [QPATHTOF(data\actions\%1_ca.paa),_action];
(_display displayCtrl 9233) ctrlSetTooltip localize format ["STR_HAVOC_boc_%1",_action];

if ((_backpack isEqualTo "") and (_chestpack isEqualTo "")) then {
    (_display displayCtrl 9233) ctrlEnable false;
    (_display displayCtrl 9233) ctrlSetTooltip "";
} else {
    (_display displayCtrl 9233) ctrlEnable true;
};
