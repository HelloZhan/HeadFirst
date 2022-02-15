TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        MallardDuck.cpp \
        WildTurkey.cpp \
        WildTurkeyAdapter.cpp \
        main.cpp

HEADERS += \
    Duck.h \
    MallardDuck.h \
    Turkey.h \
    WildTurkey.h \
    WildTurkeyAdapter.h
