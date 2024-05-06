#include "app_start.h"
#include "ui_app_start.h"
#include <QDebug>
#include <QMouseEvent>
#include <QEvent>
#include <QKeyEvent>
#include <QWheelEvent>
#include <QPalette>
#include <QPixmap>
#include <string.h>
#include "alarmstate.h"
#include "windowset.h"
#include "temperaturecontrol.h"
#include "home_simulation.h"
#include "light_control.h"
#include "home_simulation.h"


app_start::app_start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::app_start),
    alarmstate_(new alarmstate()),
    temperaturecontrol_(new temperaturecontrol())

{
    ui->setupUi(this);

    qDebug() <<"start Smart Home";

    QPixmap bg(":/res/Fotos/background.jpg");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);

    QPalette palette;
    palette.setBrush(QPalette::Window, bg);
    this->setPalette(palette);

    this->setFixedSize(915,700);
    this->setWindowTitle("Smart Home App");
}



void app_start::on_Start_simulation_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": Home simulation ";
    home_simulation::getInstance().show();

}


void app_start::on_Lightcontrol_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Light Control Window ";
    light_control::getInstance().show();
}


void app_start::on_Window_control_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Window Control Window ";
    windowset::getInstance().show();
}


void app_start::on_Alarm_state_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Window Alarm state";
    alarmstate_->show();
}


void app_start::on_Temperature_control_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": In Temperature Control Window ";
    temperaturecontrol_->show();
}


void app_start::on_Close_clicked()
{
    qDebug() << "Close Smart-Home app";
    close();
}

app_start::~app_start()
{
    delete ui;
    delete alarmstate_;
    delete temperaturecontrol_;

}

