#pragma once

#include <string>

class AudioFeedback {
private:
    std::string aktion;
    std::string aktionStatus;
    std::string roomName;
    std::string deviceName;

public:
    AudioFeedback();
    AudioFeedback(const std::string& aktion, const std::string& aktionStatus, const std::string& roomName, const std::string& deviceName);

    // Getter-Methoden
    std::string getAktion() const;
    std::string getAktionStatus() const;
    std::string getRoomName() const;
    std::string getDeviceName() const;

    // Setter-Methoden
    void setAktion(const std::string& newAktion);
    void setAktionStatus(const std::string& newAktionStatus);
    void setRoomName(const std::string& newRoomName);
    void setDeviceName(const std::string& newDeviceName);
};
