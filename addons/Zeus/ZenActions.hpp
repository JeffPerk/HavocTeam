class zen_context_menu_actions {
    class FOBParent {
        displayName = "Create Portable FOB";
        icon = "";
        statement = "";
        condition = "_hoveredEntity call havoc_fnc_canBeFOB";
        priority = 50;
        class FOBCamp {
            displayName = "Camp";
            icon = "";
            statement = "[_args] call havoc_fnc_FOBZeusWrapper";
            priority = 50;
            args = 0;
        };
        class FOBSmall: FOBCamp {
            displayName = "Small";
            icon = "";
            priority = 49;
            args = 1;
        };
        class FOBMedium: FOBCamp {
            displayName = "Medium";
            icon = "";
            priority = 48;
            args = 2;
        };
        class FOBLarge: FOBCamp {
            displayName = "Large";
            icon = "";
            priority = 47;
            args = 3;
        };
    };

    class MedFacility {
        displayName = "Set Medical Facility";
        icon = "z\havoc\addons\Media\images\icons\Medical Area.paa";
        statement = "[_hoveredEntity] remoteExec [""havoc_fnc_setMedicalFacility"", 0, true]";
        condition = "_hoveredEntity call havoc_fnc_canBeMedFacility";
        priority = 52;
    };

    class RepFacility {
        displayName = "Set Repair Facility";
        icon = "z\havoc\addons\Media\images\icons\Vehicle Service.paa";
        statement = "[_hoveredEntity] remoteExec [""havoc_fnc_setRepairFacility"", 0, true]";
        condition = "_hoveredEntity call havoc_fnc_canBeMedFacility";
        priority = 51;
    };

    class MakeIED {
        displayName = "Make IED";
        icon = "a3\ui_f\data\GUI\Cfg\Hints\IEDs_CA.paa"; //todo: icon
        statement = "call havoc_fnc_MakeIEDZeusWrapper";
        condition = "(not (isNull _hoveredEntity)) && {alive _hoveredEntity}";
        priority = 53;
    };
};