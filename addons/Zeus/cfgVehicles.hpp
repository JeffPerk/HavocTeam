class CfgVehicles {
    class Module_F;
    class ModuleEmpty_F;

    class ModuleCurator_F: Module_F {
		class Attributes
		{
            class HAVOC_Config_Zeus {
                property = QUOTE(HAVOC_Config_Zeus);
                control = "Checkbox";
				typeName = "BOOL";
                displayName = "Havoc: Config Zeus:";
                tooltip = "Enable to allow this Zeus to have placed units use LRG AI Difficulty Settings (Settings - Addon Options)";
                expression = "if (_value isequalto true) then {[_this] call havoc_fnc_ConfigZeus;}";
                condition = "logicModule";
                defaultValue = "(true)";
			};
		};
	};


};