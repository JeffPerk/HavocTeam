class DPSO_ModuleServicing: Module_F
{
	scope = 2;
	displayName = "Role Selection";
	icon = "\a3\modules_f_bootcamp\Data\IconBootcampStage.paa";
	category = "Rank & Role";
	function = FUNC(pick);
	functionPriority = 4;
	isGlobal = 1;
	isTriggerActivated = 0;
	isDisposable = 0;
	is3DEN = 0;
	class Attributes: AttributesBase
	{
		class ModuleDescription: ModuleDescription{};
	};
	class ModuleDescription: ModuleDescription
	{
		description[] = {
			"Sync this module to an object to add the function to sleect a Role.",
			"This Module can be synced to multiple objects or multiple modules can be used."
		};
			position = 0; // Position is taken into effect
			direction = 0; // Direction is taken into effect
			optional = 1; // Synced entity is optional
			duplicate = 1; // Multiple entities of this type can be synced
	};
};