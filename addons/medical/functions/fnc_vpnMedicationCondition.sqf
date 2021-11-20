#include "script_component.hpp"
params ["_medic", "_patient", "_bodyPart", "_classname"];

_hasVPN = [_medic, "HAVOC_VPN"] call ace_common_fnc_hasItem;
if(_hasVPN isEqualTo true) exitWith { true; };

if(ace_medical_treatment_allowSharedEquipment isEqualTo false) exitWith { false; };

_hasVPN = [_patient, "HAVOC_VPN"] call ace_common_fnc_hasItem;
_hasVPN;