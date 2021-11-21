#include "script_component.hpp"
params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

_this call havoc_medical_fnc_vpnMedicationSuccess;
["HAVOC_Medical_Event_ketamineLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
