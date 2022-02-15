TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        GumballMachine.cpp \
        HasQuarterState.cpp \
        NoQuarterState.cpp \
        SoldOutState.cpp \
        SoldState.cpp \
        WinnerState.cpp \
        main.cpp

HEADERS += \
    GumballMachine.h \
    HasQuarterState.h \
    NoQuarterState.h \
    SoldOutState.h \
    SoldState.h \
    State.h \
    WinnerState.h
