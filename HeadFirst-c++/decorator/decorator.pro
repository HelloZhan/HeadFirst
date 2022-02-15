TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Beverage.cpp \
        CondimentDecorator.cpp \
        DarkRoast.cpp \
        Decaf.cpp \
        Espresso.cpp \
        HouseBlend.cpp \
        Milk.cpp \
        Mocha.cpp \
        Soy.cpp \
        Whip.cpp \
        main.cpp

HEADERS += \
    Beverage.h \
    CondimentDecorator.h \
    DarkRoast.h \
    Decaf.h \
    Espresso.h \
    HouseBlend.h \
    Milk.h \
    Mocha.h \
    Soy.h \
    Whip.h
