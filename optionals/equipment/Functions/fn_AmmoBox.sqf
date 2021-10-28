/*
Function: HAVOC_fnc_Ammobox

Description:
 Used to configure basic container Ammo state.

Arguments:
 _container - Container the setup is applied to. <OBJECT>
 _Type - Equipment setup to add. <STRING>

Examples:
 (begin example)
  [this] call HAVOC_fnc_Ammobox;
  [this, "Aegis"] call HAVOC_fnc_Ammobox;
 (end)

Author:
 MitchJC
*/
if (!isServer) exitwith {};



params [
 "_container",
 ["_Type", "None"]
];

private _Type = _container getVariable ["HAVOC_LimitedAmmoSelect", -1];

if ((_Type isEqualto -1) || (_Type isEqualTo "None")) exitwith {};

call {
 if (_Type isEqualto 0) exitwith {_Type = "SMA-SPS"};
 if (_Type isEqualto 1) exitwith {_Type = "Winter"};
 if (_Type isEqualto 2) exitwith {_Type = "NI"};
    if (_Type isEqualto 3) exitwith {_Type = "CUP"};
    if (_Type isEqualto 3) exitwith {_Type = "RHS"};
};

private ["_ContainerItems"];

call {
 if (_Type isEqualTo "Vanilla") exitwith {
   _ContainerItems = [
    ["200Rnd_556x45_Box_Tracer_Red_F",10],
    ["200Rnd_65x39_cased_Box_Tracer",10],
    ["20Rnd_762x51_Mag",10],
    ["30Rnd_9x21_Mag_SMG_02_Tracer_Red",10],
    ["HandGrenade",10],
    ["SmokeShell",10],
    ["3Rnd_HE_Grenade_shell",6],
    ["Titan_AT",4]
   ];
 };
 if (_Type isEqualTo "Aegis") exitwith {
   _ContainerItems = [
    ["UKAegis_BAF_AT4_CS_AT_Launcher", 4],
    ["UKAegis_BAF_762_L42A1_20Rnd_T", 10],
    ["UKAegis_BAF_556_30Rnd_T", 24],
    ["UKAegis_BAF_556_200Rnd_T", 10],
    ["UKAegis_BAF_1Rnd_HEDP_Grenade_Shell", 6],
    ["UKAegis_BAF_9_17Rnd", 8],
    ["UKAegis_BAF_SmokeShell", 10],
    ["HandGrenade", 8]
  ];
 };
 if (_Type isEqualTo "RHS") exitwith {
   _ContainerItems = [
    ["rhs_weap_M136_hedp", 4],
    ["rhsusf_mag_6Rnd_M441_HE", 6],
    ["rhs_mag_m67", 8],
    ["rhs_mag_an_m8hc", 10],
    ["30Rnd_556x45_Stanag_Tracer_Red", 10],
    ["rhsusf_20Rnd_762x51_m118_special_Mag", 24],
    ["rhs_200rnd_556x45_M_SAW", 10],
    ["rhsusf_100Rnd_762x51", 6],
    ["rhsusf_m112_mag", 8]
  ];
 };
};

{_container addItemCargoGlobal _x} foreach _ContainerItems;
