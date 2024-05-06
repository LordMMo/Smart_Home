#include "heatingcontrol.h"

HeatingControl::HeatingControl(float maxDeviation) {
    this->maxDeviation = maxDeviation;
    this->currentHeatLevel = 0.0;  //   die aktuelle Heizstufe wird  auf 0,0 initialisiert
}

bool HeatingControl::changeHeatLevel(float newHeatLevel) {

    this->currentHeatLevel = newHeatLevel;  // Update den aktuellen Hizstufe.
    return true;
}

int HeatingControl::compareTemperature(float targetTemperature, float temperature) {

    if (temperature < targetTemperature - maxDeviation) {
        return -1;
    } else if (temperature > targetTemperature + maxDeviation) {
        return 1;
    } else {
        return 0;
    }
}

float HeatingControl::calcNewHeatLevel() {

    return currentHeatLevel;
}

