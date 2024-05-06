#pragma once

#include <QObject>
#include <QtTest>

#include "heatingcontrol.h"

class HeatingControlTest : public QObject {
    Q_OBJECT

private slots:
    void testChangeHeatLevel();
    void testCompareTemperature();
    void testCalcNewHeatLevel();
};
