#pragma once

#include <string>
#include <vector>
#include "executer.h"

class speechanalysis;
class TemperatureSensor;
class smokedetector;
class speechsensor;
class thermostathead;
class Speaker;
class Executer;

class Room {
private:
    std::string name;
    float targetTemperature;
    std::string audioFeedback;
    bool windowOpen; // Changed variable name to avoid conflict

    // Associated Components
    TemperatureSensor* tempsensor;
    speechanalysis* spanlysis;
    smokedetector* Smokedec;
    speechsensor* spsencor;
    Speaker* myspeaker;
    Executer* MExecutive;

    // Static member variable for room names
    static const std::vector<std::string> defaultRoomNames;
    static std::vector<std::string> roomNames;

public:
    Room(const std::string name, const std::vector<std::string>& initialRoomNames = defaultRoomNames);

    const std::string& getName() const;
    bool isWindowOpen() const;
    void setWindowOpen(bool isOpen);

    static const std::vector<std::string>& getRoomNames();
    static void addRoomName(const std::string& roomName);

    ~Room();
};

