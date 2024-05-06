#include "devicetest.h"

void DeviceTest::testDefaultConstructor() {
    Device device;
    QVERIFY(!device.getIsRunning());
    QVERIFY(!device.getIsAvailable());
}

void DeviceTest::testGetIsRunning() {
    Device device;
    QVERIFY(!device.getIsRunning());

    device.setIsRunning(true);
    QVERIFY(device.getIsRunning());
}

void DeviceTest::testGetIsAvailable() {
    Device device;
    QVERIFY(!device.getIsAvailable());

    device.setIsAvailable(true);
    QVERIFY(device.getIsAvailable());
}

QTEST_MAIN(DeviceTest)
