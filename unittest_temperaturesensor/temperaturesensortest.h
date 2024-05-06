#pragma once

#include <QObject>
#include <QtTest>

#include "temperaturesensor.h"

class TemperatureSensorTest : public QObject {
  Q_OBJECT

 private slots:
  void testInitialTemperature();
  void testSetValue();
  void testGetValue();
};
