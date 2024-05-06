#pragma once
#include "emergencycoordination.h"


//class EmergencyCoordination;
class EmergencyCoordinatin;

class FireInspection {
private:
    float threshold;
    EmergencyCoordinatin* emergencyCoordination;

public:
    // Standardkonstruktor
    FireInspection();

    // Konstruktor mit Parametern
    FireInspection(float threshold, EmergencyCoordinatin* emergencyCoordination);

    bool isEmergency(float measurement);
};
