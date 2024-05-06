#pragma once

#include <QWidget>

namespace Ui {
class alarmstate;
}

class alarmstate : public QWidget
{
    Q_OBJECT

public:
    explicit alarmstate(QWidget *parent = nullptr);
    ~alarmstate();

    void setMessage(const QString& message); // Hinzugefügt

private:
    Ui::alarmstate *ui;
};

