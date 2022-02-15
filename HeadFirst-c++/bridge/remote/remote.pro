TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        GenericRemote.cpp \
        LG.cpp \
        RemoteControl.cpp \
        Sony.cpp \
        SpecialRemote.cpp \
        main.cpp

HEADERS += \
    GenericRemote.h \
    LG.h \
    RemoteControl.h \
    Sony.h \
    SpecialRemote.h \
    TV.h \
    TVFactory.h
