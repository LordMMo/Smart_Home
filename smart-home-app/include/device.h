#pragma once

#include <string>
using namespace std;

class Device {
private:
    bool isRunning;
    bool isAvailable;
    string name;

public:
    Device();
    void setIsRunning(bool value);
    bool getIsRunning();
    void setIsAvailable(bool value);
    bool getIsAvailable();
};
