TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Amplifier.cpp \
        CdPlayer.cpp \
        HomeTheaterFacade.cpp \
        PopcornPopper.cpp \
        Projector.cpp \
        Screen.cpp \
        StreamingPlayer.cpp \
        TheaterLights.cpp \
        Tuner.cpp \
        main.cpp

HEADERS += \
    Amplifier.h \
    CdPlayer.h \
    HomeTheaterFacade.h \
    PopcornPopper.h \
    Projector.h \
    Screen.h \
    StreamingPlayer.h \
    TheaterLights.h \
    Tuner.h
