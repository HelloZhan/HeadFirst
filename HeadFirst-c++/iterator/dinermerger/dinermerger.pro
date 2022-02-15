TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ArrayIterator.cpp \
        DinerMenu.cpp \
        MenuItem.cpp \
        PancakeHouseMenu.cpp \
        VectorIterator.cpp \
        Waitress.cpp \
        main.cpp

HEADERS += \
    ArrayIterator.h \
    DinerMenu.h \
    Iterator.h \
    Menu.h \
    MenuItem.h \
    PancakeHouseMenu.h \
    VectorIterator.h \
    Waitress.h
