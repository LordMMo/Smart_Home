#pragma once
#include <QWidget>
#include <QStringList>
#include "room.h"
#include "smartlightbulb.h"


namespace Ui {
class light_control;
}

class light_control : public QWidget {
    Q_OBJECT

public:

    static light_control& getInstance();

private slots:
    void on_ON_Button_clicked();
    void on_OFF_Button_clicked();
    void on_room_name_currentTextChanged(const QString );

signals:
    void lightStateChanged(const QString& roomName, bool isLightOn);

private:
    explicit light_control(QWidget *parent = nullptr);
    ~light_control();
    Ui::light_control *ui;
    QStringList roomNames;
    static light_control* instance_;
    SmartLightbulb *SmartLightbulb_;
};


