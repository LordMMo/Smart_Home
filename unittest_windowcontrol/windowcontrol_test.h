#pragma once

#include <QObject>
#include <QtTest>

#include "windowcontrol.h"

class WindowControlTest : public QObject {
    Q_OBJECT

private slots:
    void testWindowStartsClosed();
    void testOpenWindow();
    void testCloseWindow();
    void testSetWindowStatus();
};
