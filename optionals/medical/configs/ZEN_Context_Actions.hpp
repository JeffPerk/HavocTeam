#include "script_component.hpp"  
class zen_context_menu_actions {
    class HealUnits {
        class Timer {
            displayName = "Reset Persistant Timer";
            condition = "[_objects,_args] call zen_context_actions_fnc_canHealUnits;";
            statement = "[_objects,_args] call HAVOC_Medical_fnc_resetTimer;";
            args = 1;
        };
    };
};