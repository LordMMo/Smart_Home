#pragma once

#include <QObject>
#include <QtTest>

#include "device.h"

class DeviceTest : public QObject {
    Q_OBJECT

private slots:
    void testDefaultConstructor();
    void testGetIsRunning();
    void testGetIsAvailable();
};
