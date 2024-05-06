#pragma once

#include <QObject>
#include <QtTest>

#include "speechsensor.h"

class SpeechsensorTest : public QObject {
    Q_OBJECT

private slots:
    void testDefaultConstructor();
    void testIsRecording();
    void testStartRecording();
    void testStopRecording();
};

