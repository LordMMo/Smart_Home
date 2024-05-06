#include "heatingcontroltest.h"

void HeatingControlTest::testChangeHeatLevel() {
    HeatingControl heatingControl(1.0);
    
    // Teste, ob die Heizstufe erfolgreich geändert wird
    QVERIFY(heatingControl.changeHeatLevel(2.0));
    QCOMPARE(heatingControl.calcNewHeatLevel(), 2.0);
}

void HeatingControlTest::testCompareTemperature() {
    HeatingControl heatingControl(1.0);

    // Teste, ob compareTemperature die richtigen Ergebnisse liefert
    QCOMPARE(heatingControl.compareTemperature(20.0, 18.0), -1);
    QCOMPARE(heatingControl.compareTemperature(20.0, 19.5), 0);
}

void HeatingControlTest::testCalcNewHeatLevel() {
    HeatingControl heatingControl(1.0);

    // Teste, ob calcNewHeatLevel die aktuelle Heizstufe zurückgibt
    QCOMPARE(heatingControl.calcNewHeatLevel(), 0.0);

    // Ändere die Heizstufe und überprüfe erneut
    heatingControl.changeHeatLevel(2.0);
    QCOMPARE(heatingControl.calcNewHeatLevel(), 2.0);
}

QTEST_MAIN(HeatingControlTest)
