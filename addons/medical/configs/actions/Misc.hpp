    
class ApplyTourniquet: BasicBandage {
    treatmentTime = 0.5;
};
class RemoveTourniquet: ApplyTourniquet {
    treatmentTime = 1.5;
};
class Splint: BasicBandage {};

class BodyBag: BasicBandage {
    treatmentTime = 10;
};

class SurgicalKit: FieldDressing {};
class PersonalAidKit: BasicBandage {};
class larynxtubus {

};
class Guedeltubus: larynxtubus {

};
class Overstretch: larynxtubus {
    displayName = "Hyperextending Head";
    displayNameProgress = "Tilting...";
};
class TurnAround: larynxtubus {
    displayName = "Manually Remove Debris";
    displayNameProgress = "Manually removing debris...";
};

class TensionpneumothoraxTreatment {
    items[] = {QGVAR(NDC)};
};
class HemopneumothoraxTreatment {
    items[] = {QGVAR(NDC)};
};

class Accuvac: larynxtubus {
    displayNameProgress = "Clearing Airway...";
};
