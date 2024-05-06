#pragma once

#include"room.h"
//class ParameterExcept_gl{};


class SmartLightbulb {
private:
    bool lightStatus; // Attribut, um den Status der Glühbirne zu speichern
    int light_brightness;

    Room *room;

public:
    // Konstruktor
    SmartLightbulb();
    SmartLightbulb(bool m_lightStatus, int m_light_brightness) : lightStatus(m_lightStatus), light_brightness(m_light_brightness){}

    void on();
    void off();

    void set_lightStatus(bool light);
    void set_light_brightness(int value);
    int get_light_brightness();
    bool get_lightStatus();

    ~SmartLightbulb(){}

};
