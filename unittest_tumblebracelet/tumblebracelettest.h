#pragma once

#include <QObject>
#include <QtTest>

#include "tumblebracelet.h"

class TumbleBraceletTest : public QObject {
    Q_OBJECT

private slots:
    void testGetEmergency();
    void testStartAlarm();
    void testStopAlarm();
};
