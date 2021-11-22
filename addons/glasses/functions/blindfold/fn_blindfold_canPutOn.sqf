/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\havoc\addons\glasses\functions\blindfold\fn_blindfold_canPutOn.sqf
 * by Ojemineh
 *
 * check if unit can wear a blindfold
 *
 * Arguments:
 * 0: caller - <OBJECT>
 * 1: target - <OBJECT>
 *
 * Return:
 * <BOOLEAN>
 *
 * Example:
 * [_player, _target] call havoc_glasses_fnc_blindfold_canPutOn;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_caller", "_target"];

_caller = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _caller) exitWith {false};
if (isNull _target) exitWith {false};

// -------------------------------------------------------------------------------------------------

private _return = false;

// (("havoc_G_Blindfold_Black" in items _unit) || ("havoc_G_Blindfold_White" in items _unit)) &&

_return = (
    (count (["havoc_Blindfold_Black", "havoc_Blindfold_White", "havoc_Blindfold_White_Blood"] arrayIntersect (items _caller)) > 0) &&
    (alive _caller) &&
    ((vehicle _target) == _target) &&
    !(_caller getVariable ["ace_captives_isSurrendering", false]) &&
    !(_caller getVariable ["ace_captives_isHandcuffed", false]) &&
    !(_caller getVariable ["ace_isUnconscious", false]) &&
    (Not visibleMap)
);

_return;
