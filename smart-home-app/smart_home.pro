QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/include\
               $$PWD/include/gui\
               $$PWD/include/sensor\



SOURCES += \
    src/gui/app_start.cpp \
    src/gui/home_simulation.cpp \
    src/gui/light_control.cpp \
    src/gui/alarmstate.cpp \
    src/gui/windowset.cpp \
     src/gui/temperaturecontrol.cpp \
    src/audiofeedback.cpp \
    src/emergencycallprovider.cpp \
    src/emergencycoordinatin.cpp \
    src/executer.cpp \
    src/sensor/smokedetector.cpp \
    src/speaker.cpp \
    src/smartlightbulb.cpp \
    src/speechanalysis.cpp \
    src/sensor/speechsensor.cpp \
    src/heatingcontrol.cpp \
    src/sensor/fireinspection.cpp \
    src/device.cpp \
    src/room.cpp \
    src/main.cpp \
    src/thermostathead.cpp \
    src/timer.cpp \
    src/voicecommand.cpp \
    src/windowcontrol.cpp\
    src/sensor/tumblebracelet.cpp \
    src/sensor/temperaturesensor.cpp


HEADERS += \
    include/gui/app_start.h \
    include/gui/home_simulation.h \
    include/gui/alarmstate.h \
    include/gui/windowset.h \
    include/gui/temperaturecontrol.h \
    include/gui/light_control.h\
    include/executer.h \
    include/heatingcontrol.h \
    include/sensor/fireinspection.h \
    include/emergencycallprovider.h \
    include/room.h \
    include/device.h \
    include/sensor/smokedetector.h \
    include/audiofeedback.h \
    include/emergencycoordination.h \
    include/room.h \
    include/speechanalysis.h \
    include/timer.h \
    include/voicecommand.h \
    include/windowcontrol.h \
    include/sensor/speechsensor.h \
    include/thermostathead.h \
    include/smartlightbulb.h \
    include/speaker.h \
    include/windowcontrol.h\
    include/sensor/tumblebracelet.h \
    include/sensor/temperaturesensor.h







FORMS += \
    ui/app_start.ui \
    ui/home_simulation.ui \
    ui/light_control.ui \
    ui/temperaturecontrol.ui \
    ui/alarmstate.ui \
    ui/windowset.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


DISTFILES += \
    res/Fotos/hintergrund.jpeg \
    include/.gitkeep

RESOURCES += \
    res/Imgs.qrc

