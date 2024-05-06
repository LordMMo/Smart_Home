#include "tumblebracelettest.h"

void TumbleBraceletTest::testGetEmergency() {
    TumbleBracelet bracelet(1.0);
    QCOMPARE(bracelet.detectEmergency(), false);
}

void TumbleBraceletTest::testStartAlarm() {
    TumbleBracelet bracelet(0.0);
    QCOMPARE(bracelet.startAlarm(), true);
}

void TumbleBraceletTest::testStopAlarm() {
    TumbleBracelet bracelet(1.0);
    QCOMPARE(bracelet.stopAlarm(), false);
}

QTEST_MAIN(TumbleBraceletTest)
