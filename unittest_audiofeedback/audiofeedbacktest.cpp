#include "audiofeedbacktest.h"


using namespace std;

void AudioFeedbackTest::testDefaultConstructor() {
    AudioFeedback audioFeedback;
    QCOMPARE(audioFeedback.getAktion(), string(""));
    QCOMPARE(audioFeedback.getAktionStatus(), string(""));
    QCOMPARE(audioFeedback.getRoomName(), string(""));
    QCOMPARE(audioFeedback.getDeviceName(), string(""));
}

void AudioFeedbackTest::testParameterizedConstructor() {
    AudioFeedback audioFeedback("Play", "Success", "Living Room", "Smart Speaker");
    QCOMPARE(audioFeedback.getAktion(), string("Play"));
    QCOMPARE(audioFeedback.getAktionStatus(), string("Success"));
    QCOMPARE(audioFeedback.getRoomName(), string("Living Room"));
    QCOMPARE(audioFeedback.getDeviceName(), string("Smart Speaker"));
}

void AudioFeedbackTest::testSetAktion() {
    AudioFeedback audioFeedback;
    audioFeedback.setAktion("Pause");
    QCOMPARE(audioFeedback.getAktion(), string("Pause"));
}

void AudioFeedbackTest::testSetAktionStatus() {
    AudioFeedback audioFeedback;
    audioFeedback.setAktionStatus("Error");
    QCOMPARE(audioFeedback.getAktionStatus(), string("Error"));
}

void AudioFeedbackTest::testSetRoomName() {
    AudioFeedback audioFeedback;
    audioFeedback.setRoomName("Bedroom");
    QCOMPARE(audioFeedback.getRoomName(), string("Bedroom"));
}

void AudioFeedbackTest::testSetDeviceName() {
    AudioFeedback audioFeedback;
    audioFeedback.setDeviceName("Smart Light");
    QCOMPARE(audioFeedback.getDeviceName(), string("Smart Light"));
}

QTEST_MAIN(AudioFeedbackTest)
