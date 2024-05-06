#include "emergencycoordination.h"

using namespace std;





// Konstruktor-Definition
EmergencyCoordinatin::EmergencyCoordinatin(float _timer, const string _adress, const string _userName, const string _emergencyType, const string _roomName):
        timer(_timer), adress(_adress), userName(_userName), emergencyType(_emergencyType), roomName(_roomName)
{
}

// Standardkonstruktor-Definition
EmergencyCoordinatin::EmergencyCoordinatin() : timer(0.0f), adress(""), userName(""), emergencyType(""), roomName("")
{
}

// Methode zum Abbrechen des Notfalls
bool EmergencyCoordinatin::cancelEmergency()
{
    if (timer > 0.0) {
        // Notfall abgebrochen
        return true;
    } else {
        // Notfall kann nicht abgebrochen werden
        return false;
    }
}
