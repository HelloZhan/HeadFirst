TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CeilingFan.cpp \
        CeilingFanHighCommand.cpp \
        CeilingFanLowCommand.cpp \
        CeilingFanMediumCommand.cpp \
        CeilingFanOffCommand.cpp \
        Light.cpp \
        LightOffCommand.cpp \
        LightOnCommand.cpp \
        RemoteControlWithUndo.cpp \
        main.cpp

HEADERS += \
    CeilingFan.h \
    CeilingFanHighCommand.h \
    CeilingFanLowCommand.h \
    CeilingFanMediumCommand.h \
    CeilingFanOffCommand.h \
    Command.h \
    Light.h \
    LightOffCommand.h \
    LightOnCommand.h \
    NoCommand.h \
    RemoteControlWithUndo.h
