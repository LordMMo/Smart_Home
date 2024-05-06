#include "speechanalysis.h"
#include "voicecommand.h"
using namespace std;



Speechanalysis::Speechanalysis(Room *roomObj) : room(roomObj) {}

VoiceCommand Speechanalysis::createVoicecommand([[maybe_unused]]const string input)
{

    VoiceCommand command;
    command.roomName = "Wohnzimmer";
    command.deviceName = "TV";
    command.aktion = "Einschalten";
    command.perfix = "Schalte";
    return command;

}

string Speechanalysis::createAudioFeedback()
    {
        return "Befehl erfolgreich ausgeführt.";
    }

VoiceCommand Speechanalysis::getVoicecommand()
{
    return createVoicecommand("Schalte den Fernseher im Wohnzimmer ein.");
}

AudioFeedback Speechanalysis::getAudiofeedback()
{
    AudioFeedback feedback;
    feedback.setAktion("Einschalten");
    feedback.setAktionStatus("Erfolgreich");
    feedback.setRoomName("Wohnzimmer");
    feedback.setDeviceName("Fernseher");
    return feedback;
}


