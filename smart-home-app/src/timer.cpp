#include "timer.h"
#include <iostream>
using namespace std;

// Funktion zum Setzen der Zeit
void Timer::setTime(int time)
{
    cout << "Timerzeit auf " << time << " Sekunden gesetzt." << endl;
}

// Funktion zum Stoppen des Timers
void Timer::stop()
{
    cout << "Timer gestoppt." << std::endl;
}
