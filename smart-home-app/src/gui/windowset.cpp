#include "windowset.h"
#include "ui_windowset.h"
#include "windowcontrol.h"
#include "room.h"


windowset* windowset::instance_ = nullptr;

windowset& windowset::getInstance() {
    // Erstelle die Instanz, wenn sie noch nicht erstellt wurde
    if (!instance_) {
        instance_ = new windowset();
    }
    return *instance_;
}


windowset::windowset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::windowset)
{
    ui->setupUi(this);
    this->setWindowTitle("Window Control");
    this->setFixedSize(420,250);

    windowcontrol_ = new WindowControl;

    ui->room_name->addItem("Choose a Room");
    const std::vector<std::string>& roomNamesVector = Room::getRoomNames();

    for (const std::string& roomName : roomNamesVector) {
        ui->room_name->addItem(QString::fromStdString(roomName));
        windowControlMap_[QString::fromStdString(roomName)] = new WindowControl;
    }

    windowcontrol_ = new WindowControl;

    // Connect the currentIndexChanged signal to the on_room_name_currentIndexChanged slot
    connect(ui->room_name, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &windowset::on_room_name_currentIndexChanged);
}

void windowset::on_Open_Button_clicked()
{
    windowcontrol_->open();
    if (selectedRoom.isEmpty() || selectedRoom == "Choose a Room") {
        qDebug() << "Please choose a room before clicking the Open button.";
        ui->textBrowser->append("Please select a room before clicking the Open button.");
        return;
    }

    if (selectedRoom == "Corridor") {
        qDebug() << "The Corridor does not have a window to open.";
        ui->textBrowser->append("The Corridor does not have a window to open.");
        return;
    }

    windowControlMap_[selectedRoom]->open();
    emit windowOpened(selectedRoom, true);  // Emit the signal for window opening

    ui->textBrowser->clear();
    ui->textBrowser->append("Window in " + selectedRoom + " has been opened.");
}


void windowset::on_Close_Button_clicked()
{
    windowcontrol_->close();
    if (selectedRoom.isEmpty() || selectedRoom == "Choose a Room") {
        qDebug() << "Please choose a room before clicking the Close button.";
        ui->textBrowser->append("Please select a room before clicking the Open button.");
        return;
    }
    if (selectedRoom == "Corridor") {
        qDebug() << "The Corridor does not have a window to close.";
        ui->textBrowser->append("The Corridor does not have a window to close.");
        return;
    }

    windowControlMap_[selectedRoom]->close();
    emit windowOpened(selectedRoom, false);

    ui->textBrowser->clear();
    ui->textBrowser->append("Window in " + selectedRoom + " has been closed.");
}


void windowset::on_room_name_currentIndexChanged(int index)
{
    // Update the selected room when the user chooses a room from the dropdown menu
    selectedRoom = ui->room_name->itemText(index);
    emit roomSelected(selectedRoom);
}

windowset::~windowset()
{
    delete ui;
    delete windowcontrol_;

    for (auto it = windowControlMap_.begin(); it != windowControlMap_.end(); ++it) {
        delete it.value();
    }
}

//#include "windowset.h"
//#include "ui_windowset.h"
//#include "windowcontrol.h"
//#include "room.h"

//windowset::windowset(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::windowset)
//{
//    ui->setupUi(this);

//    ui->room_name->addItem("Choose a Room");
//    // Retrieve room names from Room class
//    const std::vector<std::string>& roomNamesVector = Room::getRoomNames();

//    // Convert each room name to QString and add them to the QComboBox
//    for (const std::string& roomName : roomNamesVector) {
//        ui->room_name->addItem(QString::fromStdString(roomName));
//    }

//    // Create a map to associate each room with its corresponding WindowControl instance
//    for (const QString& roomName : ui->room_name->itemText()) {
//        windowControl_[roomName] = new WindowControl;
//    }
//}

//void windowset::on_pushButton_clicked()
//{
//    // Get the selected room from the QComboBox
//    QString selectedRoom = ui->room_name->currentText();

//    // Call the open function in WindowControl for the selected room
//    windowControlMap_[selectedRoom]->open();

//    // Display a message in the QTextBrowser
//    ui->textBrowser->clear();
//    ui->textBrowser->append("Window in " + selectedRoom + " has been opened.");
//}

//void windowset::on_buttonon_clicked()
//{
//    // Get the selected room from the QComboBox
//    QString selectedRoom = ui->room_name->currentText();

//    // Call the close function in WindowControl for the selected room
//    windowControlMap_[selectedRoom]->close();

//    // Display a message in the QTextBrowser
//    ui->textBrowser->clear();
//    ui->textBrowser->append("Window in " + selectedRoom + " has been closed.");
//}

//void windowset::on_room_name_currentTextChanged(const QString &arg1)
//{
//    qDebug() << "Selected Room Name: " << arg1;
//}

//windowset::~windowset()
//{
//    delete ui;

//    // Delete WindowControl instances from the map
//    for (auto it = windowControlMap_.begin(); it != windowControlMap_.end(); ++it) {
//        delete it.value();
//    }
//}










