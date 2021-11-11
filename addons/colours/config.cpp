#include "script_component.hpp"

class CfgPatches
{
	class HAVOC_Colours
	{
		author = AUTHOR;
		name = NAME;
		url = URL;
		units[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = VERSION;
		authors[] = {"Mokka"};
		weapons[] = {};
	};
};

class CfgMarkerColors
{
	class Default
	{
		scope = 1;
	};
	class ColorBlackS: Default
	{
		name = "Black Squad";
		color[] = {0,0,0,1};
		scope = 2;
	};
	class ColorRedS: Default
	{
		name = "Red Squad";
		color[] = {1,0,0,1};
		scope = 2;
	};
	class ColorGreyS: Default
	{
		name = "Grey Squad";
		color[] = {0.5, 0.5, 0.5, 1};
		scope = 2;
	};
	class ColorBlueS: Default
	{
		name = "Blue Squad";
		color[] = {0,0,1,1};
		scope = 2;
	};
	class ColorGreenS: Default
	{
		name = "Green Squad";
		color[] = {0,1,0,1};
		scope = 2;
	};
	class ColorGoldS: Default
	{
		name = "Gold Squad";
		color[] = {0.74,0.57,0.07,1};
	};
	class ColorSilverS: Default
	{
		name = "Silver Squad";
		color[] = {.9, 1.9, 1, 1};
		scope = 2;
	};

	class ColorWEST: Default
	{
		name = "BLUFOR";
		color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		scope = 2;
	};
	class ColorEAST: Default
	{
		name = "OPFOR";
		color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		scope = 2;
	};
	class ColorGUER: Default
	{
		name = "Independent";
		color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		scope = 2;
	};
	class ColorCIV: Default
	{
		name = "Civilian";
		color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
		scope = 2;
	};
	class ColorUNKNOWN: Default
	{
		name = "Unknown side";
		color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
		scope = 2;
	};
	class colorBLUFOR: ColorWEST
	{
		scope = 0;
	};
	class colorOPFOR: ColorEAST
	{
		scope = 0;
	};
	class colorIndependent: ColorGUER
	{
		scope = 0;
	};
	class colorCivilian: ColorCIV
	{
		scope = 0;
	};
};