#ifndef RESERVATION_H
#define RESERVATION_H
#include "LocalDate.h"
class Reservation{
public:
    void setArrivalDate(int year, int month, int day);
    LocalDate getArrivalDate();
    void setNights(int nights);
    int getNights();
private:
    LocalDate arrivalDate;
    int nights;
};

#endif // RESERVATION_H
