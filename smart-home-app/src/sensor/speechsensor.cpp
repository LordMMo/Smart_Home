#include "speechsensor.h"

Speechsensor::Speechsensor() : recording(false), room(nullptr) {}

bool Speechsensor::isRecording() const {
    return recording;
}

bool Speechsensor::getUserSpeaking() const {


    return false;
}

bool Speechsensor::startRecording() {
    if (!recording) {
        recording = true;
        return true;
    }
    return false;
}

bool Speechsensor::stopRecording() {
    if (recording) {
        recording = false;
        return true;
    }
    return false;
}
