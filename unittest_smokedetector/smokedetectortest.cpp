#include "smokedetectortest.h"

void SmokeDetectorTest::testSetIsPaused() {
    SmokeDetector smokeDetector;
    QVERIFY(smokeDetector.setlsPaused());
}


void SmokeDetectorTest::testLowerTimer() {
    SmokeDetector smokeDetector;

    // Teste, ob lowerTimer funktioniert, wenn nicht pausiert und der Timer größer als 0 ist
    QVERIFY(smokeDetector.lowerTimer());
}

void SmokeDetectorTest::testStartAlarm() {
    SmokeDetector smokeDetector;

    // Teste, ob startAlarm nicht funktioniert, wenn der Timer größer als 0 ist
    smokeDetector.lowerTimer();
    QVERIFY(!smokeDetector.startAlarm());
}

void SmokeDetectorTest::testStopAlarm() {
    SmokeDetector smokeDetector;

    // Teste, ob stopAlarm funktioniert, wenn pausiert
    QVERIFY(smokeDetector.stopAlarm());
}

QTEST_MAIN(SmokeDetectorTest)
