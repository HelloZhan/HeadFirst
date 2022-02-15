TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Pizza.cpp \
        PizzaStore.cpp \
        SimplePizzaFactory.cpp \
        main.cpp

HEADERS += \
    CheesePizza.h \
    ClamPizza.h \
    PepperoniPizza.h \
    Pizza.h \
    PizzaStore.h \
    SimplePizzaFactory.h \
    VeggiePizza.h
