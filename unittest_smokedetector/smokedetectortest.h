#pragma once

#include <QObject>
#include <QtTest>

#include "smokedetector.h"

class SmokeDetectorTest : public QObject {
    Q_OBJECT

private slots:
    void testSetIsPaused();
    void testLowerTimer();
    void testStartAlarm();
    void testStopAlarm();
};
