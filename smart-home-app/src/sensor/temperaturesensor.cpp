#include "temperaturesensor.h"

TemperatureSensor::TemperatureSensor() : temperature(0)

{

}

void TemperatureSensor::set_value(int temp)
{
    temperature = temp ;

}

int TemperatureSensor::get_value()
{
    return temperature;
}
