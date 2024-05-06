#pragma once

class TemperatureSensor
{
private:
    int temperature;

public:
    TemperatureSensor();

    void set_value(int temp);
    int get_value();
};
