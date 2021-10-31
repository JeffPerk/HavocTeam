class CfgFunctions {
    
    class HAVOC_Medical {
        
        tag = "havoc_medical";
        
        class Medical {
            file = "z\havoc\addons\medical\functions";
            class initialize {};
            class initSettings {};
        };
        
    };
    
    class HAVOC_Medical_ACE_Medical {
        
        tag = "ace_medical";
        
        class ace_medical {
            file = "z\havoc\addons\medical\functions\ace_medical";
            class actionCheckBloodPressureLocal {};
            class actionCheckPulseLocal {};
            class actionCheckResponse {};
            class actionDiagnose {};
            class actionRemoveTourniquet {};
            class itemCheck {};
            class playInjuredSound {};
            class treatment {};
            class useItem {};
        };
        
    };
    
    class HAVOC_Medical_ACE_Medical_Menu {
        
        tag = "ace_medical_menu";
        
        class ace_medical_menu {
            file = "z\havoc\addons\medical\functions\ace_medical_menu";
            class updateActivityLog {};
            class updateQuickViewLog {};
        };
        
    };
};
