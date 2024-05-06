TEMPLATE = subdirs

# Using subdirs to separate the application and unit tests

SUBDIRS += \
    smart-home-app/smart_home.pro \
    unittest_audiofeedback \
    unittest_device \
    unittest_heatingcontrol \
    unittest_smartlightbulb \
    unittest_smokedetector \
    unittest_speechsensor \
    unittest_temperaturesensor \
    unittest_tumblebracelet \
    unittest_windowcontrol


