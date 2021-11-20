#include "..\script_component.hpp"

class CfgPatches {

	class HAVOC_Backpacks_RadioBag {
		name = COMPONENT_NAME;
		addonRootClass = "HAVOC_backpacks";
		requiredVersion = REQUIRED_VERSION;
		requiredaddons[] = {
			"a3_supplies_f_enoch_bags",
			"HAVOC_backpacks"
		};
		units[] = {
			QCLASS(RadioBag_01_BLACK),
			QCLASS(RadioBag_01_DIGI),
			QCLASS(RadioBag_01_EAF),
			QCLASS(RadioBag_01_GHEX),
			QCLASS(RadioBag_01_HEX),
			QCLASS(RadioBag_01_MTP),
			QCLASS(RadioBag_01_TROPIC),
			QCLASS(RadioBag_01_OUCAMO),
			QCLASS(RadioBag_01_WDL)
		};
		weapons[] = {};
		author = AUTHOR;
		authors[] = {
			"O. Jemineh"
		};
		url = URL;

	};

};

#include "CfgVehicles.hpp"
