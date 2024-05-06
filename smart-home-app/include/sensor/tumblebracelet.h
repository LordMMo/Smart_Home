#pragma once

class TumbleBracelet {
private:
    float threshold;
    bool isAlarmActive;

public:
    TumbleBracelet(float threshold);

    bool detectEmergency();
    bool startAlarm();
    bool stopAlarm();
};
