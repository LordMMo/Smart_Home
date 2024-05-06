#pragma once
#include "temperaturecontrol.h"
#include "temperaturesensor.h"
#include "alarmstate.h"

#include <QWidget>

namespace Ui {
class temperaturecontrol;
}

class temperaturecontrol : public QWidget
{
    Q_OBJECT

public:
    explicit temperaturecontrol(QWidget *parent = nullptr);
    ~temperaturecontrol();

private slots:

    void on_dial_valueChanged(int value);

    void on_lcdNumber_overflow();

    void on_ok_clicked();

    void showAlarm();

    void on_Aktuelle_temperatur_overflow();

private:
    Ui::temperaturecontrol *ui;
    TemperatureSensor *temperaturesensor_;
    alarmstate *alarmWindow;



};

