/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\havoc\addons\interactions\functions\fn_initialize.sqf
 * by Ojemineh
 *
 * initialize interaction addon
 *
 * Arguments:
 * nothing
 *
 * Return:
 * nothing
 *
 * Example:
 * [] call HAVOC_interactions_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["havoc_interactions"] call havoc_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "interactions"] call havoc_fnc_log;

// -------------------------------------------------------------------------------------------------

if ((Not hasInterface) || (is3DEN)) exitWith {};

// -------------------------------------------------------------------------------------------------

[] spawn {
    
    waitUntil {if ((!isNull player) && (time > 1)) exitWith {true}; false};
    
    player addEventHandler ["InventoryOpened", {
        
        params ["_unit", "_container"];
        
        if (Not (simulationEnabled _container)) then {
            [ format [hint_havoc_default, localize "STR_HAVOC_Interactions_Inventory_Disabled"] ] call havoc_fnc_hint;
            closeDialog 0;
            true;
        } else {
            
            if (_container isKindOf "CAManBase") then {
                if ((missionNamespace getVariable ["havoc_interactions_gear_access_enabled", 0]) == 0) then {
                    [ format [hint_havoc_default, localize "STR_HAVOC_Interactions_Gear_Disabled"] ] call havoc_fnc_hint;
                    closeDialog 0;
                    true;
                } else {
                    false;
                };
            } else {
                false;
            };
            
        };
        
    }];
    
};
