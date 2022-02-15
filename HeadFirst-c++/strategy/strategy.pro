TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DecoyDuck.cpp \
        Duck.cpp \
        FlyNoWay.cpp \
        FlyRocketPowered.cpp \
        FlyWithWings.cpp \
        MallardDuck.cpp \
        ModelDuck.cpp \
        MuteQuack.cpp \
        Quack.cpp \
        ReadheadDuck.cpp \
        RubberDuck.cpp \
        Squeak.cpp \
        main.cpp

HEADERS += \
    DecoyDuck.h \
    Duck.h \
    FlyBehavior.h \
    FlyNoWay.h \
    FlyRocketPowered.h \
    FlyWithWings.h \
    MallardDuck.h \
    ModelDuck.h \
    MuteQuack.h \
    Quack.h \
    QuackBehavior.h \
    ReadheadDuck.h \
    RubberDuck.h \
    Squeak.h
