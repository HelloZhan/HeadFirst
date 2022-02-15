#include "Reservation.h"

void Reservation::setArrivalDate(int year, int month, int day)
{
    this->arrivalDate=LocalDate(year,month,day);

}

LocalDate Reservation::getArrivalDate()
{
    return arrivalDate;
}

void Reservation::setNights(int nights)
{
    this->nights=nights;
}

int Reservation::getNights()
{
    return nights;
}
