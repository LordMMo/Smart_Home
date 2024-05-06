#pragma once
#include"room.h"


class Thermostathead {
private:
    float heatlevel = 0.0;

public:
    Thermostathead();  // Konstruktor

    float getHeatLevel() const;

    Room *room;
};


