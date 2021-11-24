  #include "script_component.hpp"

   class ADDON {
		name = COMPONENT_NAME;
		author = AUTHOR;
        units[] = {
			QCLASS(Vest_PlateCarrier1_brnred),
			QCLASS(Vest_PlateCarrier1_brnyonv),
			QCLASS(Vest_PlateCarrier1_brnmidas),
			
        };
        weapons[] = {
			QCLASS(Item_Vest_PlateCarrier1_brnred),
			QCLASS(Item_Vest_PlateCarrier1_brnyonv),
			QCLASS(Item_Vest_PlateCarrier1_brnmidas)			
        };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };