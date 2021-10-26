class GVAR(onChest) {
    displayName = $STR_HAVOC_BOC_OnChest;
    condition = QUOTE( !(missionNamespace getVariable [QQGVAR(disabled),false]) && {!((backpack _player) isEqualTo '')} && {(([_player] call FUNC(chestpack)) isEqualTo '')});
    exceptions[] = {"isNotInside"};
    statement = QUOTE([_player] call FUNC(actionOnChest));
    showDisabled = 0;
    priority = 2.5;
    icon = QPATHTOF(data\actions\onchest_ca.paa);
};
class GVAR(onBack) : GVAR(onChest) {
    displayName = $STR_HAVOC_BOC_OnBack;
    condition = QUOTE(!(missionNamespace getVariable [QQGVAR(disabled),false]) && {((backpack _player) isEqualTo '')} && {!(([_player] call FUNC(chestpack)) isEqualTo '')});
    statement = QUOTE([_player] call FUNC(actionOnBack));
    icon = QPATHTOF(data\actions\onback_ca.paa);
};
class GVAR(swap) : GVAR(onChest) {
    displayName = $STR_HAVOC_BOC_Swap;
    condition = QUOTE(!(missionNamespace getVariable [QQGVAR(disabled),false]) && {!((backpack _player) isEqualTo '')} && {!(([_player] call FUNC(chestpack)) isEqualTo '')});
    statement = QUOTE([_player] call FUNC(actionSwap));
    icon = QPATHTOF(data\actions\swap_ca.paa);
};
