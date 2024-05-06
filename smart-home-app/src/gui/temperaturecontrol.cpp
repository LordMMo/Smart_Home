#include "temperaturecontrol.h"
#include "ui_temperaturecontrol.h"
#include "alarmstate.h"
#include <QTimer>

temperaturecontrol::temperaturecontrol(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::temperaturecontrol)
{
    ui->setupUi(this);
    this->setWindowTitle("Temperatorue Control");
    this->setFixedSize(550,450);

    temperaturesensor_ = new TemperatureSensor;
    alarmWindow = new alarmstate();

    int defaultTemperature = 16;
    ui->Aktuelle_temperatur->display(defaultTemperature);

    ui->dial->setValue(temperaturesensor_->get_value());

    connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(on_dial_valueChanged(int)));
}

void temperaturecontrol::on_dial_valueChanged(int value)
{
    // Begrenze den Wert auf den Bereich von 16 bis 40
    int minValue = 16;
    int maxValue = 40;

    if (value < minValue) {
        value = minValue;
    } else if (value > maxValue) {
        value = maxValue;
    }

    ui->lcdNumber->display(value);
}



void temperaturecontrol::on_ok_clicked()
{
    int currentTemperature = ui->lcdNumber->intValue();
    //temperaturesensor_->set_value(currentTemperature);


    // Wenn die Temperatur im Bereich von 16 bis 38 liegt, starte den Timer mit einer Verzögerung von einer Sekunde
    if (currentTemperature >= 16 && currentTemperature <= 40) {
        QTimer::singleShot(10000, this, [=]() { //slot callback mit lambda
            ui->Aktuelle_temperatur->display(currentTemperature);
            showAlarm();
        });             //nivht richtig



    }
}

void temperaturecontrol::showAlarm()
{
    int currentTemperature = ui->lcdNumber->intValue();
    temperaturesensor_->set_value(currentTemperature);

    if (currentTemperature >= 38)
    {
        // Temperatur ist gleich oder größer als 38 Grad, zeige das Alarmfenster
        QString message = "Temperature is too high! Current temperature: " + QString::number(currentTemperature);
        alarmWindow->setMessage(message);
        alarmWindow->show();
    }
    else if (currentTemperature <= 38)
    {
        qDebug() << "Current temperature is: " + QString::number(currentTemperature);
    }
}
void temperaturecontrol::on_Aktuelle_temperatur_overflow()
{

}
void temperaturecontrol::on_lcdNumber_overflow()
{

}

temperaturecontrol::~temperaturecontrol()
{
    delete ui;
    delete temperaturesensor_;
    delete alarmWindow;
    temperaturesensor_ = nullptr;
}



