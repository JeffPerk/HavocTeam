class CfgVehicles {
    #include "base\baseclass.hpp"
    // Unarmed - Black
    class CLASS(Arcadian_B_Black): CLASS(Arcadian_Unarmed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Black);
        editorPreview = QPATHTOF(ui\Arcadian_Black.jpg);
        textureList[] = {
            "Black", 1
        };
    };
 
    // Tan
    class CLASS(Arcadian_B_Tan): CLASS(Arcadian_Unarmed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Tan);
        editorPreview = QPATHTOF(ui\Arcadian_Tan.jpg);
        textureList[] = {
            "Tan", 1
        };
    };
    // Green
    class CLASS(Arcadian_B_Green): CLASS(Arcadian_Unarmed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Green);
        editorPreview = QPATHTOF(ui\Arcadian_Green.jpg);
        textureList[] = {
            "Green", 1
        };
    };


    // Grey
    class CLASS(Arcadian_B_Grey): CLASS(Arcadian_Unarmed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Grey);
        editorPreview = QPATHTOF(ui\Arcadian_Grey.jpg);
        textureList[] = {
            "Grey", 1
        };
    };

    // Armed - Black
    class CLASS(Arcadian_Armed_B_Black): CLASS(Arcadian_Armed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Armed_Black);
        editorPreview = QPATHTOF(ui\Arcadian_Armed_Black.jpg);
        textureList[] = {
            "Armed_Black", 1
        };
    };

    // Tan
    class CLASS(Arcadian_Armed_B_Tan): CLASS(Arcadian_Armed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Armed_Tan);
        editorPreview = QPATHTOF(ui\Arcadian_Armed_Tan.jpg);
        textureList[] = {
            "Armed_Tan", 1
        };
    };

    // Green
    class CLASS(Arcadian_Armed_B_Green): CLASS(Arcadian_Armed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Armed_Green);
        editorPreview = QPATHTOF(ui\Arcadian_Armed_Green.jpg);
        textureList[] = {
            "Armed_Green", 1
        };
    };

    // Grey
    class CLASS(Arcadian_Armed_B_Grey): CLASS(Arcadian_Armed_Base) {
        MACRO_BLUFOR_VEHICLE
        displayName = CSTRING(Armed_Grey);
        editorPreview = QPATHTOF(ui\Arcadian_Armed_Grey.jpg);
        textureList[] = {
            "Armed_Grey", 1
        };
    };
};
