#pragma once

#include <QObject>
#include <QtTest>

#include "audiofeedback.h"

class AudioFeedbackTest : public QObject {
  Q_OBJECT

 private slots:
  void testDefaultConstructor();
  void testParameterizedConstructor();
  void testSetAktion();
  void testSetAktionStatus();
  void testSetRoomName();
  void testSetDeviceName();
};
