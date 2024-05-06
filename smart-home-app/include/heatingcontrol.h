#pragma once

class HeatingControl {
private:
    float maxDeviation = 1.0;
    float currentHeatLevel;

public:
    HeatingControl(float maxDeviation);

    bool changeHeatLevel(float newHeatLevel);
    int compareTemperature(float targetTemperature, float temperature);
    float calcNewHeatLevel();
};
