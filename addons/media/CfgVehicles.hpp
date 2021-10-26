class CfgVehicles {
    class Flag_White_F;
    class HAVOC_Flag_White: Flag_White_F
    {
        author="Mokka";

        editorPreview="\z\havoc\addons\media\images\cow.paa";
        _generalMacro="HAVOC_Flag_White";
        displayName="Flag (Last Resort Gaming, White)";
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture ""\z\havoc\addons\media\images\cow.paa""";
        };
    };
    class HAVOC_Flag_Black: Flag_White_F
    {
        author="Mokka";

        editorPreview="\z\havoc\addons\media\images\cow.paa";
        _generalMacro="HAVOC_Flag_Black";
        displayName="Flag (Last Resort Gaming, Black)";
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture ""\z\havoc\addons\media\images\cow.paa""";
        };
    };
};
