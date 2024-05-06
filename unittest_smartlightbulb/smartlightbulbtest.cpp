#include "smartlightbulbtest.h"

void SmartLightbulbTest::testInitialLightStatus() {
    SmartLightbulb bulb;
    QCOMPARE(bulb.get_lightStatus(), false);
}

void SmartLightbulbTest::testTurnOnLight() {
    SmartLightbulb bulb;
    bulb.on();
    QCOMPARE(bulb.get_lightStatus(), true);
}

void SmartLightbulbTest::testTurnOffLight() {
    SmartLightbulb bulb;
    bulb.on();
    bulb.off();
    QCOMPARE(bulb.get_lightStatus(), false);
}

void SmartLightbulbTest::testSetLightStatus() {
    SmartLightbulb bulb;
    bulb.set_lightStatus(true);
    QCOMPARE(bulb.get_lightStatus(), true);

    bulb.set_lightStatus(false);
    QCOMPARE(bulb.get_lightStatus(), false);
}

void SmartLightbulbTest::testGetLightStatus() {
    SmartLightbulb bulb;
    QCOMPARE(bulb.get_lightStatus(), false);

    bulb.set_lightStatus(true);
    QCOMPARE(bulb.get_lightStatus(), true);
}

void SmartLightbulbTest::testSetLightBrightness() {
    SmartLightbulb bulb;
    bulb.set_light_brightness(2);
    QCOMPARE(bulb.get_light_brightness(), 2);

    bulb.set_light_brightness(5);
    QCOMPARE(bulb.get_light_brightness(), 3);

    bulb.set_light_brightness(-1);
    QCOMPARE(bulb.get_light_brightness(), 1);
}

void SmartLightbulbTest::testGetLightBrightness() {
    SmartLightbulb bulb;
    QCOMPARE(bulb.get_light_brightness(), 1);

    bulb.set_light_brightness(3);
    QCOMPARE(bulb.get_light_brightness(), 3);
}

QTEST_MAIN(SmartLightbulbTest)
