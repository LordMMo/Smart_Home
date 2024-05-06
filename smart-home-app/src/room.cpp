#include "room.h"



std::vector<std::string> Room::roomNames = {"Bedroom", "Living Room", "Kitchen", "WC", "Corridor"};


// Konstrukteur, der Raumnamen annimmt
Room::Room(const std::string name, const std::vector<std::string>& initialRoomNames)
    : name(name), targetTemperature(18.0), audioFeedback(" ") {
    // Hinzufügen des Raumnamens zum statischen Vektor
    roomNames.push_back(name);

    // Hinzufügen der ursprünglichen Raumnamen zum statischen Vektor
    roomNames.insert(roomNames.end(), initialRoomNames.begin(), initialRoomNames.end());
}

const std::vector<std::string>& Room::getRoomNames() {
    return roomNames;
}


const std::string& Room::getName() const {
    return name;
}

bool Room::isWindowOpen() const {
    return windowOpen;
}

// Statische Funktion zum Hinzufügen des Raumnamens
void Room::addRoomName(const std::string& roomName) {
    roomNames.push_back(roomName);
}



Room::~Room() {

}
