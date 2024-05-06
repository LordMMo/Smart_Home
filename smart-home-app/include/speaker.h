#pragma once
#include"room.h"
#include "audiofeedback.h"
#include "speechanalysis.h"
#include "device.h" // Include the device class header for inheritance

//class room;
//class speechanalysis; <forward decleratio
//todo forward decleratio löchen

class Speaker : public Device {


    Speechanalysis *speechanalysis;// Zeiger auf ein speechanalysis-Objekt
    Room *room;
    //set und get
public:
    Speaker();
    bool start();
    bool stop();
    bool createAudioRecord(AudioFeedback );
    void setSpeechAnalysis(Speechanalysis);


};
