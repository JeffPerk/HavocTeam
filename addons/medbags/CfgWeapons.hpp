#include "script_component.hpp"
class CfgWeapons {
    
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};
    
    // MEDICAL SUPPLIES
    
    class GVAR(FirstAid): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "IFAK";
        descriptionShort = "Contains material for first aid";
        editorPreview = QPATHTOF(data\previews\firstaid.jpg);
        picture = QPATHTOF(data\ui\firstaid_ca.paa);
        model = "\a3\weapons_f\ammo\mag_firstaidkit.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };
    
    class GVAR(MedicKit): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Medic Bag";
        descriptionShort = "Contains materials to resupply medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 24;
        };
    };

    class GVAR(Trauma): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Trauma Kit";
        descriptionShort = "Contains materials for medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };

    class GVAR(DrugKit): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Drug Kit";
        descriptionShort = "Contains DURGS!";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        picture = QPATHTOF(data\previews\booboo_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 12;
        };
    };
    
};
