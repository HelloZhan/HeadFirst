TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DuckAdapter.cpp \
        MallardDuck.cpp \
        TurkeyAdapter.cpp \
        WildTurkey.cpp \
        main.cpp

HEADERS += \
    Duck.h \
    DuckAdapter.h \
    MallardDuck.h \
    Turkey.h \
    TurkeyAdapter.h \
    WildTurkey.h
