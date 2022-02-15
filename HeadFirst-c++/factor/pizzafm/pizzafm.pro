TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ChicagoPizzaStore.cpp \
        ChicagoStyleCheesePizza.cpp \
        ChicagoStyleClamPizza.cpp \
        ChicagoStylePepperoniPizza.cpp \
        ChicagoStyleVeggiePizza.cpp \
        NYPizzaStore.cpp \
        NYStyleCheesePizza.cpp \
        NYStyleClamPizza.cpp \
        NYStylePepperoniPizza.cpp \
        NYStyleVeggiePizza.cpp \
        Pizza.cpp \
        PizzaStore.cpp \
        main.cpp

HEADERS += \
    ChicagoPizzaStore.h \
    ChicagoStyleCheesePizza.h \
    ChicagoStyleClamPizza.h \
    ChicagoStylePepperoniPizza.h \
    ChicagoStyleVeggiePizza.h \
    NYPizzaStore.h \
    NYStyleCheesePizza.h \
    NYStyleClamPizza.h \
    NYStylePepperoniPizza.h \
    NYStyleVeggiePizza.h \
    Pizza.h \
    PizzaStore.h
