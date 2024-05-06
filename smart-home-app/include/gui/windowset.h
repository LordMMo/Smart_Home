#pragma once

#include <QWidget>
#include <QString>
#include <QMap>
#include "windowcontrol.h"

namespace Ui {
class windowset;
}

class WindowControl;

class windowset : public QWidget
{
    Q_OBJECT

public:
    static windowset& getInstance();

signals:
    void roomSelected(const QString& roomName);
    void windowOpened(const QString& roomName, bool isOpen);

private slots:
    void on_Open_Button_clicked();
    void on_Close_Button_clicked();
    void on_room_name_currentIndexChanged(int index);

private:
    explicit windowset(QWidget *parent = nullptr);
    ~windowset();
    Ui::windowset *ui;
    WindowControl *windowcontrol_;
    QMap<QString, WindowControl*> windowControlMap_;
    QString selectedRoom;
    static windowset* instance_;
};

