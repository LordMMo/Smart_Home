#include "alarmstate.h"
#include "ui_alarmstate.h"

QString off_state = "Aus";
QString on_state = "An";

alarmstate::alarmstate(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::alarmstate)
{
    ui->setupUi(this);
    this->setWindowTitle("Alarm Sate");
    this->setFixedSize(380,300);
}

alarmstate::~alarmstate()
{
    delete ui;
}

void alarmstate::setMessage(const QString& message)
{

    ui->textBrowser->setText(message);
}

