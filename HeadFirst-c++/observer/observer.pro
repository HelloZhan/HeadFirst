TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CurrentConditionsDisplay.cpp \
        ForecastDisplay.cpp \
        StatisticsDisplay.cpp \
        ThirdPartDisplay.cpp \
        WeatherData.cpp \
        main.cpp

HEADERS += \
    CurrentConditionsDisplay.h \
    DisplayElement.h \
    ForecastDisplay.h \
    Observer.h \
    StatisticsDisplay.h \
    Subject.h \
    ThirdPartDisplay.h \
    WeatherData.h
