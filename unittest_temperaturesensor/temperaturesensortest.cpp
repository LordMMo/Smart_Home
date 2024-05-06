#include "temperaturesensortest.h"

void TemperatureSensorTest::testInitialTemperature() {
    TemperatureSensor sensor;
    QCOMPARE(sensor.get_value(), 0);
}

void TemperatureSensorTest::testSetValue() {
    TemperatureSensor sensor;
    sensor.set_value(25);
    QCOMPARE(sensor.get_value(), 25);

    sensor.set_value(-5);
    QCOMPARE(sensor.get_value(), -5);
}

void TemperatureSensorTest::testGetValue() {
    TemperatureSensor sensor;
    QCOMPARE(sensor.get_value(), 0);

    sensor.set_value(30);
    QCOMPARE(sensor.get_value(), 30);
}

QTEST_MAIN(TemperatureSensorTest)
