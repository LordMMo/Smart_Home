#include "smartlightbulb.h"
#include <QDebug>


// Konstruktor, initialisiert "lightStatus" auf false
SmartLightbulb::SmartLightbulb(){
    lightStatus = false;
    light_brightness = 1;
}

void SmartLightbulb::on(){
    qDebug()<< "Light on";
    lightStatus = true;
}

void SmartLightbulb::off(){
    qDebug()<< "Light off";
    lightStatus = false;
}

void SmartLightbulb::set_lightStatus(bool light){
    lightStatus = light;
}

bool SmartLightbulb::get_lightStatus(){
    return lightStatus;
}

void SmartLightbulb::set_light_brightness(int m_light_brightness){
    if(m_light_brightness >= 3)
    {
        light_brightness = 3;
    }
    else if(m_light_brightness <=0)
    {
        light_brightness = 1;
    }
    else{
        light_brightness = m_light_brightness;
    }
    qDebug()<< "Light brightness = " << light_brightness;
}
int SmartLightbulb::get_light_brightness(){
    return light_brightness;
}
