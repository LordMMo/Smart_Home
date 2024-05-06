#include "windowcontrol.h"

WindowControl::WindowControl()
{
    windowStatus= false;
}

void WindowControl::open()
{
    windowStatus = true;

}

void WindowControl::close()
{
    windowStatus = false;
}

void WindowControl::setWindowStatus(bool status)
{
    windowStatus = status;
}

bool WindowControl::getWindowStatus() const
{
    return windowStatus;
}
