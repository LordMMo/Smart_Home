#pragma once

#include <QWidget>
#include "light_control.h"
#include "windowset.h"

namespace Ui {
class home_simulation;
}

class home_simulation : public QWidget
{
    Q_OBJECT

public:
    explicit home_simulation(QWidget *parent = nullptr);
    ~home_simulation();

    void turnOnLight(const QString& roomName);
    static home_simulation& getInstance();



public slots:
    void updateLightState(const QString& roomName, bool isLightOn);
    void updateWindowState(const QString& roomName, bool isOpen);


private:
    Ui::home_simulation *ui;
    windowset* windowsetInstance;
    light_control* lightControlInstance;
    static home_simulation* instance_;

};



