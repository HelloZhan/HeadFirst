TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CaffeineBeverage.cpp \
        CaffeineBeverageWithHook.cpp \
        Coffee.cpp \
        CoffeeWithHook.cpp \
        Tea.cpp \
        TeaWithHook.cpp \
        main.cpp

HEADERS += \
    CaffeineBeverage.h \
    CaffeineBeverageWithHook.h \
    Coffee.h \
    CoffeeWithHook.h \
    Tea.h \
    TeaWithHook.h
