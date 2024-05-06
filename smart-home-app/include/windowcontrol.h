#pragma once


#include <QObject>

class WindowControl
{


public:
    WindowControl();

    void open();
    void close();
    void setWindowStatus(bool status);
    bool getWindowStatus() const;

private:
    bool windowStatus;
;
};


