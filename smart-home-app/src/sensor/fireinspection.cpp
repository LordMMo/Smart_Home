#include "fireinspection.h"


FireInspection::FireInspection() {

}

FireInspection::FireInspection(float threshold, EmergencyCoordinatin* emergencyCoordination)
    : threshold(threshold), emergencyCoordination(emergencyCoordination)  {
    this->threshold = threshold;
}
bool FireInspection::isEmergency(float measurement) {

    if (measurement > threshold) {
        return true;  //Wenn der Messwert den threshold überschreitet, wird ein Alarm ausgelöst.
    } else {
        return false;
    }
}
