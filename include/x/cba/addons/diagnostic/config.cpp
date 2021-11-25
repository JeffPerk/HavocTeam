////////////////////////////////////////////////////////////////////
//DeRap: cba_diagnostic\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Nov 04 01:54:19 2020 : 'file' last modified on Sat Apr 18 11:27:02 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches {
	class cba_diagnostic
	{
		name = "$STR_cba_diagnostic_component";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.98;
		requiredAddons[] = {"cba_common","cba_events"};
		author = "$STR_CBA_Author";
		authors[] = {"Spooner","Sickboy"};
		url = "$STR_CBA_URL";
		version = 3.15;
		versionStr = "3.15.1.200418";
		versionAr[] = {3,15,1,200418};
	};
};
class CfgFunctions
{
	class CBA
	{
		class Diagnostic
		{
			class debug
			{
				file = "\x\cba\addons\diagnostic\fnc_debug.sqf";
				headerType = -1;
				recompile = 0;
			};
			class error
			{
				file = "\x\cba\addons\diagnostic\fnc_error.sqf";
				headerType = -1;
				recompile = 0;
			};
			class log
			{
				file = "\x\cba\addons\diagnostic\fnc_log.sqf";
				headerType = -1;
				recompile = 0;
			};
			class test
			{
				file = "\x\cba\addons\diagnostic\fnc_test.sqf";
				headerType = -1;
				recompile = 0;
			};
		};
		class ProjectileTracking
		{
			class addUnitTrackProjectiles
			{
				file = "\x\cba\addons\diagnostic\fnc_addUnitTrackProjectiles.sqf";
				headerType = -1;
				recompile = 0;
			};
			class removeUnitTrackProjectiles
			{
				file = "\x\cba\addons\diagnostic\fnc_removeUnitTrackProjectiles.sqf";
				headerType = -1;
				recompile = 0;
			};
		};
	};
	class A3
	{
		class Debug
		{
			class isDebugConsoleAllowed
			{
				file = "\x\cba\addons\diagnostic\fnc_isDebugConsoleAllowed.sqf";
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class cba_diagnostic
	{
		init = "call compile preprocessFileLineNumbers '\x\cba\addons\diagnostic\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class cba_diagnostic
	{
		init = "call compile preprocessFileLineNumbers '\x\cba\addons\diagnostic\XEH_preInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayDebugPublic
	{
		cba_diagnostic_extendedDebug = "_this call (uiNamespace getVariable 'cba_diagnostic_fnc_initExtendedDebugConsole')";
		cba_diagnostic_removeCancelButton = "((_this select 0) displayCtrl 2) ctrlEnable false; ((_this select 0) displayCtrl 2) ctrlShow false;";
	};
	class RscDisplayInterrupt
	{
		cba_diagnostic_extendedDebug = "_this call (uiNamespace getVariable 'cba_diagnostic_fnc_initExtendedDebugConsole')";
		cba_diagnostic_targetDebug = "_this call (uiNamespace getVariable 'cba_diagnostic_fnc_initTargetDebugConsole')";
	};
	class RscDisplayMPInterrupt
	{
		cba_diagnostic_extendedDebug = "_this call (uiNamespace getVariable 'cba_diagnostic_fnc_initExtendedDebugConsole')";
		cba_diagnostic_targetDebug = "_this call (uiNamespace getVariable 'cba_diagnostic_fnc_initTargetDebugConsole')";
	};
};
class Cfg3DEN
{
	class Mission
	{
		class Scenario
		{
			class AttributeCategories
			{
				class States
				{
					class Attributes
					{
						class EnableTargetDebug
						{
							property = "EnableTargetDebug";
							value = 0;
							control = "CheckboxNumber";
							displayName = "$STR_cba_diagnostic_EnableTargetDebug";
							tooltip = "$STR_cba_diagnostic_EnableTargetDebug_tooltip";
							defaultValue = "0";
							expression = "true";
							wikiType = "[[Bool]]";
						};
					};
				};
			};
		};
	};
};
class ctrlMenuStrip;
class Display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class DebugConsole
				{
					shortcuts[] = {"512+0x20"};
				};
				class FunctionsViewer
				{
					shortcuts[] = {"2048+0x21"};
				};
				class ConfigViewer
				{
					shortcuts[] = {"2048+0x22"};
				};
			};
		};
	};
};
class RscStructuredText;
class RscTitles
{
	class cba_diagnostic_Error
	{
		idd = -1;
		duration = 10;
		fadeIn = 0;
		fadeOut = 0.5;
		movingEnable = 0;
		class Controls
		{
			class cba_diagnostic_Error: RscStructuredText
			{
				onLoad = "uiNamespace setVariable ['cba_diagnostic_Error',_this select 0]";
				idc = -1;
				font = "RobotoCondensedBold";
				sizeEx = "0.55 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
				x = "0 * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
				y = "5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2)";
				w = "40 * (((safezoneW / safezoneH) min 1.2)/ 40)";
				h = "10 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
				colorBackground[] = {1,0.2,0,0.8};
			};
		};
	};
};
class RscEdit;
class cba_diagnostic_watchInput: RscEdit
{
	autocomplete = "scripting";
	shadow = 0;
	font = "EtelkaMonospacePro";
	x = "0.5 * (((safezoneW / safezoneH) min 1.2)/ 40)";
	y = "11 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
	w = "21 * (((safezoneW / safezoneH) min 1.2)/ 40)";
	h = "1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
	sizeEx = "0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
};
class cba_diagnostic_watchOutput: RscEdit
{
	lineSpacing = 1;
	style = 512;
	shadow = 0;
	font = "EtelkaMonospacePro";
	x = "0.5 * (((safezoneW / safezoneH) min 1.2)/ 40)";
	y = "12 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
	w = "21 * (((safezoneW / safezoneH) min 1.2)/ 40)";
	h = "1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
	colorBackground[] = {0,0,0,0.75};
	sizeEx = "0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)";
};
