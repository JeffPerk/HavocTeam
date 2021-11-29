

class ACE_morphine: ACE_ItemCore {
    scope=2;
    displayName="Havoc Morphine autoinjector 10mg/1mL";
    descriptionShort="Analgesic, used for moderate pain";
    descriptionUse="Analgesic, used for moderate pain";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1;
    };
};

class ACE_epinephrine: ACE_ItemCore {
    scope=2;
    displayName="Havoc Adrenaline autoinjector 1mg/1mL";
    descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1;
    };
};

////////////////////////////////////////////////////////////////////////////////

class GVAR(morphine): ACE_ItemCore {
    scope=2;
    displayName="Havoc Morphine 10mg/1mL Ampoule";
    picture="\z\havoc\addons\media\images\icon\morphine.paa";
    descriptionShort="Analgesic, used for moderate pain";
    descriptionUse="Analgesic, used for moderate pain";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class GVAR(epinephrine): ACE_ItemCore {
    scope=2;
    displayName="Havoc Adrenaline 1mg/1mL Ampoule";
    picture="\z\havoc\addons\media\images\icon\epi.paa";
    descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};
class GVAR(naloxone): ACE_atropine {
    scope=2;
    displayName="Havoc Naloxone Hydrochloride Dihydrate 1.6mg/4mL Ampoule";
    picture="\z\havoc\addons\media\images\icon\naloxone.paa";
    descriptionShort="Opiod antagonist, reverses negative effects of narcotics";
    descriptionUse="Opiod antagonist, reverses negative effects of narcotics";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class GVAR(fentanyl): ACE_morphine {
    scope=2;
    displayName="Havoc Fentanyl 100mcg/2mL Ampoule";
    picture="\z\havoc\addons\media\images\icon\fentanyl.paa";
    descriptionShort="Analgesic, used for severe pain";
    descriptionUse="Analgesic, used for severe pain";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class GVAR(ketamine): ACE_morphine {
    scope=2;
    displayName="Havoc Ketamine Hydrochloride 200mg/2mL Ampoule";
    descriptionShort="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes mild hypertension and tachycardia.";
    descriptionUse="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes mild hypertension and tachycardia.";
    picture="\z\havoc\addons\media\images\icon\ket.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class GVAR(VPN): ACE_ItemCore {
    scope=2;
    displayName="Havoc 3mL Drug Syringe";
    descriptionShort="For administering drugs";
    descriptionUse="For administering drugs";
    picture="\z\havoc\addons\media\images\icon\VPN.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass=0.01;
    };
};