#include "device.h"

Device::Device() : isRunning(false), isAvailable(false) {}

void Device::setIsRunning(bool value) {
    isRunning = value;
}
bool Device::getIsRunning() {
    return isRunning;
}
void Device::setIsAvailable(bool value) {
    isAvailable = value;
}
bool Device::getIsAvailable() {
    return isAvailable;
}
