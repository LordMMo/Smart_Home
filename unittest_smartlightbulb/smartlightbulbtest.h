#pragma once

#include <QObject>
#include <QtTest>

#include "smartlightbulb.h"

class SmartLightbulbTest : public QObject {
  Q_OBJECT

 private slots:
  void testInitialLightStatus();
  void testTurnOnLight();
  void testTurnOffLight();
  void testSetLightStatus();
  void testGetLightStatus();
  void testSetLightBrightness();
  void testGetLightBrightness();
};
