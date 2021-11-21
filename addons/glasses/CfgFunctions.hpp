class CfgFunctions {

	class havoc_Glasses {

		tag = "havoc_glasses";

		class Glasses {
			file = "\z\havoc\addons\glasses\functions";
			class initialize {};
			class initSettings {};
		};

		class Blindfold {
			file = "\z\havoc\addons\glasses\functions\blindfold";
			class blindfold_canPutOn {};
			class blindfold_canRemove {};
			class blindfold_doPutOn {};
			class blindfold_doRemove {};
		};

	};

};
