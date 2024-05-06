#include "speechsensortest.h"

void SpeechsensorTest::testDefaultConstructor() {
    Speechsensor speechsensor;
    QVERIFY(!speechsensor.isRecording());
}

void SpeechsensorTest::testIsRecording() {
    Speechsensor speechsensor;
    QVERIFY(!speechsensor.isRecording());

    speechsensor.startRecording();
    QVERIFY(speechsensor.isRecording());

    speechsensor.stopRecording();
    QVERIFY(!speechsensor.isRecording());
}

void SpeechsensorTest::testStartRecording() {
    Speechsensor speechsensor;
    QVERIFY(!speechsensor.isRecording());

    QVERIFY(speechsensor.startRecording());
    QVERIFY(speechsensor.isRecording());

    QVERIFY(!speechsensor.startRecording());
}

void SpeechsensorTest::testStopRecording() {
    Speechsensor speechsensor;
    QVERIFY(!speechsensor.isRecording());

    QVERIFY(!speechsensor.stopRecording());

    speechsensor.startRecording();
    QVERIFY(speechsensor.isRecording());

    QVERIFY(speechsensor.stopRecording());
    QVERIFY(!speechsensor.isRecording());

    QVERIFY(!speechsensor.stopRecording());
}

QTEST_MAIN(SpeechsensorTest)
