/*
 * ARMA EXTENDED ENVIRONMENT
 * \havoc_medical\functions\fn_initSettings.sqf
 * by Ojemineh
 * 
 * register cba settings
 * 
 * Arguments:
 * nothing
 * 
 * Return:
 * nothing
 * 
 * Example:
 * [] call HAVOC_medical_fnc_initSettings;
 * 
 */

// -------------------------------------------------------------------------------------------------

// MEDICAL
// -------------------------------------------------------------------------------------------------

[
    "havoc_medical_usage_order_responder",
    "LIST",
    [
        localize "STR_HAVOC_Medical_CBA_Usage_Order_Responder_Title",
        localize "STR_HAVOC_Medical_CBA_Usage_Order_Responder_Tip"
    ],
    [
        localize "STR_HAVOC_Medical_CBA_Category",
        localize "STR_HAVOC_Medical_CBA_Category_Consume"
    ],
    [
        [0,1], 
        [
            localize "STR_HAVOC_Medical_CBA_Usage_Order_Responder_0",
            localize "STR_HAVOC_Medical_CBA_Usage_Order_Responder_1"
        ], 
        0
    ],
    1,
    {}
] call CBA_Settings_fnc_init;

[
    "havoc_medical_usage_order_medics",
    "LIST",
    [
        localize "STR_HAVOC_Medical_CBA_Usage_Order_Medics_Title", 
        localize "STR_HAVOC_Medical_CBA_Usage_Order_Medics_Tip"
    ],
    [
        localize "STR_HAVOC_Medical_CBA_Category", 
        localize "STR_HAVOC_Medical_CBA_Category_Consume"
    ],
    [
        [0,1], 
        [
            localize "STR_HAVOC_Medical_CBA_Usage_Order_Medics_0",
            localize "STR_HAVOC_Medical_CBA_Usage_Order_Medics_1"
        ], 
        1
    ],
    1,
    {}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------

[
    "havoc_medical_return_items",
    "CHECKBOX",
    [
        localize "STR_HAVOC_Medical_CBA_Return_Items_Title", 
        localize "STR_HAVOC_Medical_CBA_Return_Items_Tip"
    ],
    [
        localize "STR_HAVOC_Medical_CBA_Category", 
        localize "STR_HAVOC_Medical_CBA_Category_Return"
    ],
    true,
    1,
    {}
] call CBA_Settings_fnc_init;

[
    "havoc_medical_return_tourniquets",
    "SLIDER",
    [
        localize "STR_HAVOC_Medical_CBA_Return_Tourniquets_Title", 
        localize "STR_HAVOC_Medical_CBA_Return_Tourniquets_Tip"
    ],
    [
        localize "STR_HAVOC_Medical_CBA_Category", 
        localize "STR_HAVOC_Medical_CBA_Category_Return"
    ],
    [0,4,1,0],
    1,
    {}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------
