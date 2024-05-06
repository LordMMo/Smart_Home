#pragma once
#include <string>
using namespace std;


class EmergencyCoordinatin
{
private:
    float timer;
    string adress;
    string userName;
    string emergencyType;
    string roomName;

public:

    // Konstruktor
    EmergencyCoordinatin(float _timer, const string _adress, const string _userName, const string _emergencyType, const string _roomName);

    // Standardkonstruktor
    EmergencyCoordinatin();

    // Methode zum Abbrechen des Notfalls
    bool cancelEmergency();
};
