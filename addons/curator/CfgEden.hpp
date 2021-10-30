class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class HAVOC_attributes {
                class Attributes {
                    class GVAR(isZeus) {
                        displayName = CSTRING(isZeus);
                        tooltip = CSTRING(isZeus_Description);
                        property = QGVAR(isZeus);
                        control = "Checkbox";
                        expression = QUOTE(if (_value) then {ARR_2([{[_this] call FUNC(assignZeus)}, _this]) call CBA_fnc_execNextFrame});
                        defaultValue = "-1";
                        condition = "objectControllable";
                    };
                };
            };
        };
    };
};
