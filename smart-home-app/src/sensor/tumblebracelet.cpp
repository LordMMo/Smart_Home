#include "tumblebracelet.h"
#include <QDebug>

TumbleBracelet::TumbleBracelet(float threshold) : threshold(threshold), isAlarmActive(false) {}

bool TumbleBracelet::detectEmergency() {
    // Generiere einen Zufallswert zwischen 0 und 1
    float randomValue = static_cast<float>(rand()) / RAND_MAX;

    return randomValue > threshold;
}


bool TumbleBracelet::startAlarm() {
    if (detectEmergency() && !isAlarmActive) {
        isAlarmActive = true;
        qDebug() << "Alarm gestartet!";
        return true;
    }
    return false;
}

bool TumbleBracelet::stopAlarm() {
    if (!detectEmergency() && isAlarmActive) {
        isAlarmActive = false;
        qDebug() << "Alarm gestoppt.";
        return true;
    }
    return false;
}
