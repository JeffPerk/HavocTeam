/*
Function: Havoc_fnc_ConfigPlayer

Description:
    Used to configure basic player attributes and equipment.

Arguments:
    _unit - Player the setup is applied to. <OBJECT>
    _Section - The Section the Player is in. <STRING>
    _Traits - Which Traits the player has, can be more than one. <ARRAY>
    _Loadout - Name of Loadout to call. Changes player equipment to Loadout from Havoc. <STRING>

Examples:
    (begin example)
        [this] call Havoc_fnc_ConfigPlayer;
        [this, "1 Section"] call Havoc_fnc_ConfigPlayer;
        [this, "909 EAW", ["Pilot"]] call Havoc_fnc_ConfigPlayer;
        [this, "Command", ["Pilot", "Mission Maker"]] call Havoc_fnc_ConfigPlayer;
        [this, "909 EAW", ["Pilot"], "3CB Pilot"] call Havoc_fnc_ConfigPlayer;
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
    if (_Section isEqualto 0) exitwith {_Section = "Command"};
    if (_Section isEqualto 1) exitwith {_Section = "Red"};
    if (_Section isEqualto 2) exitwith {_Section = "Blue"};
    if (_Section isEqualto 3) exitwith {_Section = "Silver"};
    if (_Section isEqualto 4) exitwith {_Section = "Gold"};
    if (_Section isEqualto 5) exitwith {_Section = "Black"};
    if (_Section isEqualto 5) exitwith {_Section = "Green"};
    if (_Section isEqualto 6) exitwith {_Section = "Reaper"};
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
                if (_Section == "Command") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Red") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Blue") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Silver") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Gold") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Black") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Green") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
                if (_Section == "Reaper") exitwith {
                    _ShortRange = ["501", "502", "503", "504", "505", "506", "507", "58"];
                    _LongRange = ["51", "52", "53", "54", "55", "56", "57", "58"];
                };
        };

        // TFAR Beta and Legacy use different way to set the frequency, so we have to check which version
        // is loaded to support both
        if (_beta) then {
            _unit setVariable ["TFAR_freq_sr", _ShortRange, true];
            _unit setVariable ["TFAR_freq_lr", _LongRange, true];
        } else {
            group _unit setVariable ["tf_sw_frequency", [0,9,_ShortRange,0,nil,-1,0,false], true];
            group _unit setVariable ["tf_lr_frequency", [0,9,_LongRange,0,nil,-1,0,false], true];
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


    //=========== Patches
    [_unit, _Section] call Havoc_fnc_Patches;

    //=========== Set Section
    _unit setVariable ["HAVOC_Section", _Section, true];


    call {
            if (_Section == "Command") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
            };
            if (_Section == "Red") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorRedS"];
            };
            if (_Section == "Blue") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorBlueS"];
            };
            if (_Section == "Silver") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorSilverS"];
            };
            if (_Section == "Gold") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorGoldS"];
            };
            if (_Section == "Black") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorBlackS"];
            };
            if (_Section == "Green") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorGreenS"];
            };
            if (_Section == "Reaper") exitwith {
                group _unit setVariable ["BFT_groupMarker_visible", true];
                group _unit setVariable ["BFT_groupMarker_type", "recon"];
                group _unit setVariable ["BFT_groupMarker_color", "ColorGreyS"];
            };
    };

};

//========== SideChat Config
if (hasinterface) then {
    if ((isClass (configFile >> "CfgPatches" >> "task_force_radio")) && (EnableSideChat)) then {
        if ((_Section == "Command") || (_Section == "Reaper")) then {
            1 enablechannel [true, false];
        };
    };
};


