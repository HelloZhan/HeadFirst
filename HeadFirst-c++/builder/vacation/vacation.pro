TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Accommodation.cpp \
        CityVacationBuilder.cpp \
        Hotel.cpp \
        OutdoorsVacationBuilder.cpp \
        Reservation.cpp \
        Tent.cpp \
        Vacation.cpp \
        main.cpp

HEADERS += \
    Accommodation.h \
    CityVacationBuilder.h \
    Hotel.h \
    LocalDate.h \
    OutdoorsVacationBuilder.h \
    Reservation.h \
    Tent.h \
    Vacation.h \
    VacationBuilder.h
