#pragma once

#include "VoiceCommand.h"
#include "Room.h"

class VoiceCommand;
class Room;
class Executer {

private:
    VoiceCommand *vcommand;
    Room *room;


public:
    bool executeVoiceCommand(VoiceCommand voiceCommand);



};
