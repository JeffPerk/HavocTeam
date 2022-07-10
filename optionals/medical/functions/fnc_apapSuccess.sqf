#include "script_component.hpp"
params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

_this call havoc_medical_fnc_vpnMedicationSuccess;
["havoc_medical_Event_apapLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;