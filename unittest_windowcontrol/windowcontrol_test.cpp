#include "windowcontrol_test.h"

void WindowControlTest::testWindowStartsClosed() {
    WindowControl window;
    QCOMPARE(window.getWindowStatus(), false);
}

void WindowControlTest::testOpenWindow() {
    WindowControl window;
    window.open();
    QCOMPARE(window.getWindowStatus(), true);
}

void WindowControlTest::testCloseWindow() {
    WindowControl window;
    window.open();
    window.close();
    QCOMPARE(window.getWindowStatus(), false);
}

void WindowControlTest::testSetWindowStatus() {
    WindowControl window;
    window.setWindowStatus(true);
    QCOMPARE(window.getWindowStatus(), true);

    window.setWindowStatus(false);
    QCOMPARE(window.getWindowStatus(), false);
}

QTEST_MAIN(WindowControlTest)
