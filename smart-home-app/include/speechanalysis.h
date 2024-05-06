#pragma once

#include"room.h"
#include <string>
#include "voicecommand.h"
#include "audiofeedback.h"
#include "windowcontrol.h"
#include "speechanalysis.h"
using namespace std;



class WindowControl;
class LightControl;
class Speechanalysis
{

private:
    Room *room;
    WindowControl *window;
    LightControl *light;
    Speaker *speaker;

public:
    Speechanalysis(Room *roomObj);
    VoiceCommand createVoicecommand(const string input);
    string createAudioFeedback();
    VoiceCommand getVoicecommand();
    AudioFeedback getAudiofeedback();

    string speech;
    void updateRoomInformation(const string roomName, float targetTemperature);

    // Methode zur Abfrage von Rauminformationen
    string getRoomInformation();




};
