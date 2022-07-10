#include "..\script_component.hpp"
/*
 * ARMA EXTENDED ENVIRONMENT
 * \havoc_medical\supplies\functions\fn_doUnpackDrugKit.sqf
 * by Ojemineh
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call havoc_medical_supplies_fnc_doUnpackDrugKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        [_unit, QGVAR(Medical_MedicKit_Open_1), [], 30, 1000, -1, _pitch] call havoc_common_fnc_play3dSound;
    };

    havoc_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    havoc_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], { havoc_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, { havoc_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        localize "Unpack Drug Kit....",
 {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((havoc_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (havoc_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (havoc_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "havoc_medbags_DrugKit";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "kat_TXA", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_amiodarone", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_atropine", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_lidocaine", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_naloxone", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_nitroglycerin", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_norepinephrine", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "kat_phenylephrine", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "ACE_epinephrine", 10, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "ACE_morphine", 16, _order, _overflow] call havoc_common_fnc_addItem;
        [_unit, "ACE_adenosine", 8, _order, _overflow] call havoc_common_fnc_addItem;



    };

    if (havoc_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {

        [_unit, QGVAR(Medical_MedicKit_Open_1)] call havoc_common_fnc_stop3dSound;



    };

};
