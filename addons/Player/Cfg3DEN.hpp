class ctrlToolbox;

class Cfg3DEN {
    class Attributes {
        class Default;
        class Title: Default {
            class Controls {
                class Title;
            };
        };
        class GroupSelect: Title {
            attributeLoad = "(_this controlsGroupCtrl 100) lbSetCurSel (((_value + 1) min 7) max 0);";
            attributeSave = "(lbCurSel (_this controlsGroupCtrl 100)) - 1";
            class Controls: Controls {
                class Title: Title{};
                class Value: ctrlToolbox {
                    idc = 100;
                    style = "0x02";
                    x = "48 * (pixelW * pixelGrid * 0.50)";
                    w = "75 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    rows = 1;
                    columns = 8;
                    strings[] = {"None","CMD", "Red", "Blue", "White", "Yellow", "Green", "Reaper"};
                };
            };
        };
    };
    class Object {
        class AttributeCategories {
            class HAVOC_attributes {
                displayName = "Havoc";
                collapsed = 1;
                class Attributes {
                    class HAVOCGroup_Preset {
                        property = QUOTE(HAVOC_Group_Preset);
                        control = GroupSelect;
                        displayName = "HAVOC Preset Group:";
                        tooltip = "Default Preset for Patches & TFAR Radio Frequencies.";
                        expression = "[_this, _value] call HAVOC_fnc_ConfigPlayer;";
                        typeName = "STRING";
                        condition = "objectBrain";
                        defaultValue = "-1";
                    };
                    class HAVOCPilot {
                        property = QUOTE(HAVOCPilot);
                        control = "Checkbox";
                        displayName = "Pilot";
                        tooltip = "Set the player to Pilot to allow them in the Pilot seat of aircraft.";
                        expression = "_this setUnitTrait ['Pilot', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class HAVOCMission_Maker {
                        property = QUOTE(HAVOCMission_Maker);
                        control = "Checkbox";
                        displayName = "Mission Maker";
                        tooltip = "Define this player as Mission Maker to allow access to further mission controls.";
                        expression = "_this setUnitTrait ['Mission Maker', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class HAVOCInstructor {
                        property = QUOTE(HAVOCInstructor);
                        control = "Checkbox";
                        displayName = "Instructor";
                        tooltip = "Define this player as Instructor to allow access to any valid Instructor Controls - Only used with Training Functions.";
                        expression = "_this setUnitTrait ['Instructor', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                };
            };
        };
    };
};