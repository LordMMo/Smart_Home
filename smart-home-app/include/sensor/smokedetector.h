#pragma once

#include <iostream>
#include"room.h"


using namespace std ;



class SmokeDetector {
private:
    bool isPaused ;
    float timer;

public:
    bool setlsPaused();
    bool lowerTimer();
    bool startAlarm();
    bool stopAlarm();
    Room *room;
};
