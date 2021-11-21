#include "script_component.hpp"


class CfgPatches {
	
	class ADDON {
		author = AUTHOR;
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"a3_characters_f_enoch"
		};
		units[] = {};
		weapons[] = {};
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		version = VERSION;
	};
	
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgGlasses.hpp"
#include "CfgVehicles.hpp"
