#include "..\script_component.hpp"

class CfgPatches {
	
	class HAVOC_Medical_Supplies {
		name = "$STR_HAVOC_Medical_Supplies_Title";
		addonRootClass = "HAVOC_Medical";
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"a3_props_f_orange",
			"havoc_medical"
		};
		units[] = {
			"HAVOC_Item_FirstAid",
			"HAVOC_Item_MedicKit"
		};
		weapons[] = {
			"HAVOC_FirstAid",
			"HAVOC_MedicKit"
		};
		author = "$STR_HAVOC_Medical_Supplies_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = "$STR_HAVOC_Medical_Supplies_URL";
		VERSION_CONFIG;
	};
	
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
