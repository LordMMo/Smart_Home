#include "smokedetector.h"

bool SmokeDetector::setlsPaused() {
    isPaused = true;
    return true;
}

bool SmokeDetector::lowerTimer() {
    if (!isPaused && timer > 0.0) {

        return true;
    } else {
        return false;
    }
}

bool SmokeDetector::startAlarm() {
    if (!isPaused && timer <= 0.0) {
        cout << "Rauchalarm gestartet!" << endl;
        return true;
    } else {
        return false;
    }
}

bool SmokeDetector::stopAlarm() {
    if (isPaused) {
        cout << "Alarm pausiert." << endl;
        return true;
    } else {
        cout << "Alarm kann nicht gestoppt werden." << endl;
        return false;
    }
}

