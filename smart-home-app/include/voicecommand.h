#pragma once

#include <string>
#include "executer.h"

using namespace std;

class Executer;


class VoiceCommand {
private:

    Executer *executer;
public:
    string roomName;
    string deviceName;
    string aktion;
    string perfix;
    bool isValid;

    // Konstruktor
    VoiceCommand(const string _roomName, const string _deviceName, const string _aktion, const string _perfix);

    // Standardkonstruktor
    VoiceCommand();



    // Funktion, um die Funktion aus der Aktion abzuleiten
    void getFunctionFromAction();
};


