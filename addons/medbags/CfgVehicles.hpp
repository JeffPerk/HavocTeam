#include "script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles {
    
    // INTERACTIONS
    
    class Man;
    class CAManBase: Man {
        
        // exceptions[] = {"isNotDead", "isNotUnconscious", "isNotSurrendering", "isNotHandcuffed", "isNotCarrying", "isNotDragging", "isNotEscorting", "isNotSwimming", "isNotRefueling", "isNotOnLadder", "isNotSitting", "isNotInside", "isNotInZeus", "notOnMap"};
        
        class ACE_SelfActions {
            class ACE_Equipment {
                
                class GVAR(Medical_Supplies_Action_FirstAid) {
                    displayName = "Unpack Boo Boo Bag";
                    condition = "[_player] call FUNC(canUnpackFirstAid)";
                    statement = "[_player] call FUNC(doUnpackFirstAid)";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                
                class GVAR(Medical_Supplies_Action_MedicKit) {
                    displayName = "Unpack Medic Bag";
                    condition = "[_player] call FUNC(canUnpackMedicKit)";
                    statement = "[_player] call FUNC(doUnpackMedicKit)";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };

                class GVAR(Medical_Supplies_Action_DrugKit) {
                    displayName = "Unpack Drug Kit";
                    condition = "[_player] call FUNC(canUnpackDrugKit)";
                    statement = "[_player] call FUNC(doUnpackDrugKit)";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
                
            };
        };
        
    };

    // MEDICAL SUPPLIES
    class Item_Base_F;
    
    class GVAR(Item_FirstAid): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Boo Boo Bag";
        editorPreview = QPATHTOF(data\previews\firstaid.jpg);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(FirstAid),1);
        };
    };
    
    class GVAR(Item_MedicKit): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Medic Bag";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(MediKit),1);
        };
    };
    
    class GVAR(Item_DrugKit): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Drug Kit";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(MediKit),1);
        };
    };
};
