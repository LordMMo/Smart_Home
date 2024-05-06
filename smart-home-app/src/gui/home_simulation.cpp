#include "home_simulation.h"
#include "ui_home_simulation.h"
#include "QPixmap"
#include "QMessageBox"
#include "light_control.h"
#include "windowset.h"
#include "room.h"


home_simulation* home_simulation::instance_ = nullptr;

home_simulation& home_simulation::getInstance() {
    // Erstelle die Instanz
    if (!instance_) {
        instance_ = new home_simulation();
    }
    return *instance_;
}

home_simulation::home_simulation(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::home_simulation)
{




    ui->setupUi(this);
    this->setFixedSize(1080,610);
    this->setWindowTitle("Home simulation");



    QPixmap pix(":/res/Fotos/lamp_off.png");
    ui->LivingRoom_light->setPixmap(pix.scaled(50, 50));
    ui->BedRoom_light->setPixmap(pix.scaled(50, 50));
    ui->Corridor_light->setPixmap(pix.scaled(50, 50));
    ui->Kitchen_light->setPixmap(pix.scaled(50, 50));
    ui->WC_light->setPixmap(pix.scaled(50, 50));

    QPixmap pi(":/res/Fotos/colsed_window1.png");
    ui->LivingRoom_window->setPixmap(pi.scaled(50, 50));
    ui->BedRoom_window->setPixmap(pi.scaled(50, 50));
    ui->WC_window->setPixmap(pi.scaled(50, 50));

    //damit der Finster in der Küche sich nach rechts dreht
    QTransform rotationTransform;
    rotationTransform.rotate(270);
    QPixmap rotatedPix = pi.transformed(rotationTransform);
    ui->Kitchen_window->setPixmap(rotatedPix.scaled(50, 50));

}


void home_simulation::updateLightState(const QString& roomName, bool isLightOn) {
    QPixmap newPix = QPixmap(":/res/Fotos/lamp_on13.png");
    qDebug() <<"update lightstate ";
    if (isLightOn) {
        newPix = QPixmap(":/res/Fotos/lamp_on13.png");
    } else {
        newPix = QPixmap(":/res/Fotos/lamp_off.png");
    }

    if (roomName == "Living Room") {
        ui->LivingRoom_light->setPixmap(newPix.scaled(50, 50));
    } else if (roomName == "Bedroom") {
        ui->BedRoom_light->setPixmap(newPix.scaled(50, 50));
    } else if (roomName == "Corridor") {
        ui->Corridor_light->setPixmap(newPix.scaled(50, 50));
    } else if (roomName == "Kitchen") {
        ui->Kitchen_light->setPixmap(newPix.scaled(52, 52));
    } else if (roomName == "WC") {
        ui->WC_light->setPixmap(newPix.scaled(50, 50));
    }


}

void home_simulation::updateWindowState(const QString& roomName, bool isOpen) {
    QPixmap newPix;

    if (isOpen) {
        newPix = QPixmap(":/res/Fotos/opend_window1.png");
    } else {
        newPix = QPixmap(":/res/Fotos/colsed_window1.png");
    }

    if (roomName == "Living Room") {
        ui->LivingRoom_window->setPixmap(newPix.scaled(50, 50));
    } else if (roomName == "Bedroom") {
        ui->BedRoom_window->setPixmap(newPix.scaled(50, 50));
    } else if (roomName == "WC") {
        ui->WC_window->setPixmap(newPix.scaled(50, 50));
    } else if (roomName == "Kitchen") {
        QTransform rotationTransform;
        rotationTransform.rotate(270);
        QPixmap rotatedPix = newPix.transformed(rotationTransform);
        ui->Kitchen_window->setPixmap(rotatedPix.scaled(52, 52));


    }

}

home_simulation::~home_simulation()
{
    delete ui;
    delete instance_;

}
