#include "script_component.hpp"
class CfgWeapons {
    
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};
    
    // MEDICAL SUPPLIES
    
    class HAVOC_FirstAid: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        displayName = "Boo Boo Bag";
        descriptionShort = "Contains material for first aid";
        editorPreview = "\havoc_medical\supplies\data\previews\firstaid.jpg";
        picture = "\havoc_medical\supplies\data\ui\firstaid_ca.paa";
        model = "\a3\weapons_f\ammo\mag_firstaidkit.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };
    
    class HAVOC_MedicKit: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        displayName = "Medic Bag";
        descriptionShort = "Contains materials to resupply medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 50;
        };
    };
    
};
