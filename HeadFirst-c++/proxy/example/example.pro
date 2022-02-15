TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Proxy.cpp \
        RealSubject.cpp \
        main.cpp

HEADERS += \
    Proxy.h \
    RealSubject.h \
    Subject.h
