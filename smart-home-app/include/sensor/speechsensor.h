#pragma once
#include"room.h"




class Speechsensor {

private:
    bool recording; // Attribut, um den Aufnahmezustand zu speichern

public:
    // Konstruktor
    Speechsensor();

    // Getter-Methode für isRecording
    bool isRecording() const;

    // Methode, um zu überprüfen, ob der Benutzer spricht
    bool getUserSpeaking() const;

    // Methode zum Starten der Aufnahme
    bool startRecording();

    // Methode zum Stoppen der Aufnahme
    bool stopRecording();

    Room *room;

};
