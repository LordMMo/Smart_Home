#pragma once

#include <QMainWindow>
#include "alarmstate.h"
#include "windowset.h"
#include "home_simulation.h"
#include "temperaturecontrol.h"
#include "light_control.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class app_start;
}
QT_END_NAMESPACE

class app_start : public QMainWindow
{
    Q_OBJECT

public:
    explicit app_start(QWidget *parent = nullptr);
    ~app_start();

private slots:
    void on_Start_simulation_clicked();

    void on_Lightcontrol_clicked();

    void on_Window_control_clicked();

    void on_Alarm_state_clicked();

    void on_Temperature_control_clicked();

    void on_Close_clicked();

private:
    Ui::app_start *ui;
    alarmstate *alarmstate_;
    windowset *windowset_;
    temperaturecontrol *temperaturecontrol_;
    light_control *light_control_;
};

