#include "audiofeedback.h"

using namespace std;

AudioFeedback::AudioFeedback() {
}

AudioFeedback::AudioFeedback(const string& _aktion, const string& _aktionStatus, const string& _roomName, const string& _deviceName)
    : aktion(_aktion), aktionStatus(_aktionStatus), roomName(_roomName), deviceName(_deviceName) {
}

string AudioFeedback::getAktion() const {
    return aktion;
}

string AudioFeedback::getAktionStatus() const {
    return aktionStatus;
}

string AudioFeedback::getRoomName() const {
    return roomName;
}

string AudioFeedback::getDeviceName() const {
    return deviceName;
}

void AudioFeedback::setAktion(const string& newAktion) {
    aktion = newAktion;
}

void AudioFeedback::setAktionStatus(const string& newAktionStatus) {
    aktionStatus = newAktionStatus;
}

void AudioFeedback::setRoomName(const string& newRoomName) {
    roomName = newRoomName;
}

void AudioFeedback::setDeviceName(const string& newDeviceName) {
    deviceName = newDeviceName;
}
