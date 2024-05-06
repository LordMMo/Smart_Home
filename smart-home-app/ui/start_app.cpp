#include "start_app.h"
#include "ui_start_app.h"

start_app::start_app(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::start_app)
{
    ui->setupUi(this);
}

start_app::~start_app()
{
    delete ui;
}
