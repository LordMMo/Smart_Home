#include <iostream>
#include "app_start.h"
#include <QApplication>
#include "light_control.h"
#include "home_simulation.h"
#include "windowset.h"

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    app_start w;
    w.show();

    //connect für Lampe und Fentser
    QObject::connect(&light_control::getInstance(), &light_control::lightStateChanged,&home_simulation::getInstance(), &home_simulation::updateLightState);
    QObject::connect(&windowset::getInstance(), &windowset::windowOpened, &home_simulation::getInstance(), &home_simulation::updateWindowState);


    return a.exec();
}
