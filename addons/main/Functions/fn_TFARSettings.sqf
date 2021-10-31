// not documented: postInit

if (isserver) then {{_x setSpeaker "NoVoice"} forEach playableUnits;}; // Here because it has nowhere else to go!

if (!hasinterface) exitwith {};

if !(isClass (configFile >> "CfgPatches" >> "task_force_radio")) exitwith {};

if (isNil "HAVOC_Main_TFARTransmitRange") exitwith {};
player setVariable ["tf_sendingDistanceMultiplicator", HAVOC_Main_TFARTransmitRange];

if (isNil "HAVOC_Main_TFARTerrainInterference") exitwith {};
player setVariable ["TF_terrain_interception_coefficient", HAVOC_Main_TFARTerrainInterference];
