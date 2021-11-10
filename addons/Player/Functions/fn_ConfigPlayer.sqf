/*
Function: HAVOC_fnc_ConfigPlayer

name:
	Used to configure basic player attributes and equipment.

Arguments:
	_unit - Player the setup is applied to. <OBJECT>
	_Section - The Section the Player is in. <STRING>
	_Traits - Which Traits the player has, can be more than one. <ARRAY>
	_Loadout - Name of Loadout to call. Changes player equipment to Loadout from HAVOC Fundamentals. <STRING>

Examples:
	(begin example)
		[this] call HAVOC_fnc_ConfigPlayer;
		[this, "1 Section"] call HAVOC_fnc_ConfigPlayer;
		[this, "ds999", ["Pilot"]] call HAVOC_fnc_ConfigPlayer;
		[this, "ds990", ["Pilot", "Mission Maker"]] call HAVOC_fnc_ConfigPlayer;
		[this, "ds999", ["Pilot"], "3CB Pilot"] call HAVOC_fnc_ConfigPlayer;
	(end)

Author:
	MitchJC
*/

params [
	"_unit",
	["_Section", "Support"],
	["_Traits", []],
	["_Loadout", []]
];

if (_Section isEqualto -1) exitwith {};

call {
	if (_Section isEqualto 0) exitwith {_Section = "ds990"};
	if (_Section isEqualto 1) exitwith {_Section = "da991"};
	if (_Section isEqualto 2) exitwith {_Section = "da992"};
	if (_Section isEqualto 3) exitwith {_Section = "da993"};
	if (_Section isEqualto 4) exitwith {_Section = "ds994"};
	if (_Section isEqualto 5) exitwith {_Section = "da995"};
	if (_Section isEqualto 6) exitwith {_Section = "da996"};
	if (_Section isEqualto 7) exitwith {_Section = "ds997"};
	if (_Section isEqualto 8) exitwith {_Section = "da998"};
	if (_Section isEqualto 9) exitwith {_Section = "ds999"};
	if (_Section isEqualto 10) exitwith {_Section = "bolo"};
};

if (local _unit) then {

	//========== Section Config
	// todo: replace this check with a check for tfar_core path if legacy TFAR reaches EOL
	// and gets fully deprecated
	if (isClass (configFile >> "CfgPatches" >> "task_force_radio")) then {

		// TFAR Beta now uses tfar_core as its main patch, task_force_radio patch is only supplied
		// for legacy compatibility, so we can use this to check if the beta is currently loaded,
		// or not
		_beta = isClass (configFile >> "CfgPatches" >> "tfar_core");

		private ["_ShortRange", "_LongRange"];

		call {
			if (_Section == "ds990") exitwith {
				_ShortRange = ["101", "102", "103", "104", "105", "106", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
			if (_Section == "da991") exitwith {
				_ShortRange = ["111", "112", "113", "114", "115", "116", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
			if (_Section == "da992") exitwith {
				_ShortRange = ["121", "122", "123", "124", "125", "126", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
			if (_Section == "da993") exitwith {
				_ShortRange = ["131", "132", "133", "134", "135", "136", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
			if (_Section == "ds994") exitwith {
				_ShortRange = ["141", "142", "143", "144", "145", "146", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
			if (_Section == "da995") exitwith {
				_ShortRange = ["151", "152", "153", "154", "155", "156", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
            if (_Section == "da996") exitwith {
				_ShortRange = ["161", "162", "163", "164", "165", "166", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
            if (_Section == "da997") exitwith {
				_ShortRange = ["171", "172", "173", "174", "175", "176", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
            if (_Section == "da998") exitwith {
				_ShortRange = ["181", "182", "183", "184", "185", "186", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
            if (_Section == "ds999") exitwith {
				_ShortRange = ["191", "192", "193", "194", "195", "196", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
            if (_Section == "bolo") exitwith {
				_ShortRange = ["101", "102", "103", "104", "105", "106", "99", "69"];
				_LongRange = ["40", "50", "51", "52", "53", "99", "60", "69"];
			};
		};

		// TFAR Beta and Legacy use different way to set the frequency, so we have to check which version
		// is loaded to support both
		if (_beta) then {
			_unit setVariable ["TFAR_freq_sr", _ShortRange, true];
			_unit setVariable ["TFAR_freq_lr", _LongRange, true];
		} else {
			group _unit setVariable ["tf_sw_frequency", [0,9,_ShortRange,0,nil,-1,0,false], true];
			group _unit setVariable ["tf_HAVOC_frequency", [0,9,_LongRange,0,nil,-1,0,false], true];
		};
	};
	//========== Trait Config
	private _TraitsArray = call {
		if ((typeName _Traits) isEqualTo "STRING") exitWith { [_Traits]};
		_Traits
	};

	if !(_TraitsArray isEqualTo []) then {
		{
			_unit setUnitTrait [_x, true, true];
		} forEach _TraitsArray;
	};
	//========ACE Player Traits
	if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {

		_unit setvariable ["ace_advanced_fatigue_performanceFactor",2.0,true];

		if (_unit getunittrait "Medic") then { _unit setVariable ["ace_medical_medicClass", 1, true]};
		if (_unit getunittrait "Doctor") then { _unit setVariable ["ace_medical_medicClass", 2, true]};
		if (_unit getunittrait "Engineer") then { _unit setVariable ["ace_isEngineer", 1, true]};
		if (_unit getunittrait "Adv Engineer") then { _unit setVariable ["ace_isEngineer", 2, true]};
	};

	//========== Loadout Config
	if !(_Loadout isEqualto []) then {
		[_unit, _Loadout] call HAVOC_fnc_Loadouts;
	};

	//=========== Patches
	[_unit, _Section] call HAVOC_fnc_Patches;

	//=========== Set Section
	_unit setVariable ["HAVOC_Section", _Section, true];
};

//========== SideChat Config
if (hasinterface) then {
	if ((isClass (configFile >> "CfgPatches" >> "task_force_radio")) && (EnableSideChat)) then {
		if ((_Section == "Command") || (_Section == "ds999")) then {
			1 enablechannel [true, false];
		};
	};
};
