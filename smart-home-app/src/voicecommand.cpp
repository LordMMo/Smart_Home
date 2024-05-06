#include "voicecommand.h"
#include <iostream>
using namespace std;

// Konstruktor-Definition
VoiceCommand::VoiceCommand(const string _roomName, const string _deviceName, const string _aktion, const string _perfix)
    : roomName(_roomName), deviceName(_deviceName), aktion(_aktion), perfix(_perfix)
{
}

// Standardkonstruktor-Definition
VoiceCommand::VoiceCommand() : roomName(""), deviceName(""), aktion(""), perfix("")
{
}

void VoiceCommand::getFunctionFromAction()
{

    if (aktion == "Einschalten") {
        cout << "Gerät einschalten" << endl;
    } else if (aktion == "Ausschalten") {
        cout << "Gerät ausschalten" << endl;
    } else {
        cout << "Unbekannte Aktion" << endl;
    }
}
