/*
 * Argument:
 * 0: Action name <STRING>
 * 1: Name of the action shown in the menu <STRING>
 * 2: Icon <STRING>
 * 3: Statement <CODE>
 * 4: Condition <CODE>
 * 5: Insert children code <CODE> (Optional)
 * 6: Action parameters <ANY> (Optional)
 * 7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
 * 8: Distance <NUMBER> (Optional)
 * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
 * 10: Modifier function <CODE> (Optional)
 */

/*
 * Argument:
 * 0: Object the action should be assigned to <OBJECT>
 * 1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
 * 2: Parent path of the new action <ARRAY> (Example: `["ACE_SelfActions", "ACE_Equipment"]`)
 * 3: Action <ARRAY>
 */




if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _HAVOCmakecom = [
    "HAVOCmakecom",
    "Communications",
    "",
    {
        player call havoc_role_fnc_makecom;
    },
    {true},
    {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _HAVOCmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _HAVOCmakeeng = [
    "HAVOCmakeeng",
    "Engineer",
    "",
    {
        player call havoc_role_fnc_makeeng;
    },
    {true},
    {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _HAVOCmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _HAVOCmakemed = [
    "HAVOCmakemed",
    "Medic",
    "",
    {
        player call havoc_role_fnc_makemed;
    },
    {true},
    {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _HAVOCmakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _HAVOCmakewep = [
    "HAVOCmakewep",
    "Weapons",
    "",
    {
        player call havoc_role_fnc_makewep;
    },
    {true},
    {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _HAVOCmakewep] call ACE_interact_menu_fnc_addActionToObject;



