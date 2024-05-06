#include "light_control.h"
#include "ui_light_control.h"
#include "room.h"
#include <QDebug>

light_control* light_control::instance_ = nullptr;

light_control& light_control::getInstance() {
    // Erstelle die Instanz
    if (!instance_) {
        instance_ = new light_control();
    }
    return *instance_;
}

light_control::light_control(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::light_control) {
    this->setFixedSize(380,200);
    ui->setupUi(this);
    this->setWindowTitle("Light Control");

    SmartLightbulb_ = new SmartLightbulb;
    ui->room_name->addItem("Choose a Room");
    // Raumnamen aus der Raumklasse abrufen
    const std::vector<std::string>& roomNamesVector = Room::getRoomNames();

    //Raumnamen in QString konvertieren und in der QComboBox hinzufügen
    for (const std::string& roomName : roomNamesVector) {
        ui->room_name->addItem(QString::fromStdString(roomName));


    }

}


void light_control::on_ON_Button_clicked()
{
    SmartLightbulb_->on();
    QString selectedRoom = ui->room_name->currentText();
    emit lightStateChanged(selectedRoom, true);

    qDebug() << "Turned ON the light in room:" << selectedRoom;
}

void light_control::on_OFF_Button_clicked()
{
    SmartLightbulb_->off();
    QString selectedRoom = ui->room_name->currentText();
    emit lightStateChanged(selectedRoom, false);

    qDebug() << "Turned OFF the light in room:" << selectedRoom;

}

void light_control::on_room_name_currentTextChanged(const QString )
{

}


light_control::~light_control() {
    delete ui;
    delete SmartLightbulb_;
    delete instance_;
}

