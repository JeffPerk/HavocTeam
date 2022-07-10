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
                    displayName = "Unpack IFAK";
                    condition = "[_player] call havoc_medbags_fnc_canUnpackFirstAid";
                    statement = "[_player] call havoc_medbags_fnc_doUnpackFirstAid";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };

                class GVAR(Medical_Supplies_Action_MedicKit) {
                    displayName = "Unpack Medic Bag";
                    condition = "[_player] call havoc_medbags_fnc_canUnpackMedicKit";
                    statement = "[_player] call havoc_medbags_fnc_doUnpackMedicKit";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };

                class GVAR(Medical_Supplies_Action_Trauma) {
                    displayName = "Unpack Trauma Kit";
                    condition = "[_player] call havoc_medbags_fnc_canUnpackTrauma";
                    statement = "[_player] call havoc_medbags_fnc_doUnpackTrauma";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };

                class GVAR(Medical_Supplies_Action_DrugKit) {
                    displayName = "Unpack Drug Kit";
                    condition = "[_player] call havoc_medbags_fnc_canUnpackDrugKit";
                    statement = "[_player] call havoc_medbags_fnc_doUnpackDrugKit";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
                    showDisabled = 0;
                };
            };
        };
        // class ACE_MainActions {
        //     class GVAR(Medical_Supplies_Action_Take) {
        //         displayName = "Take IFAK";
        //         condition = "[_player] call havoc_medbags_fnc_canTake";
        //         statement = "[(_player, _target)] call havoc_medbags_fnc_doTake";
        //         exceptions[] = {"isNotInside", "isNotSitting"};
        //         icon = QPATHTOF(data\icons\medical_cross_ex_ca.paa);
        //         showDisabled = 0;
        //     };
        // };
    };

    // MEDICAL SUPPLIES
    class Item_Base_F;

    class GVAR(Item_FirstAid): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "IFAK";
        editorPreview = QPATHTOF(data\previews\firstaid.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = GVAR(FirstAid);
            count = 1;
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
            name = GVAR(MedicKit);
            count = 1;
        };
    };

    class GVAR(Item_Trauma): Item_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Trauma Kit";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        vehicleClass = "Items";
        class TransportItems {
            name = GVAR(Trauma);
            count = 1;
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
            name = GVAR(DrugKit);
            count = 1;
        };
    };
};
