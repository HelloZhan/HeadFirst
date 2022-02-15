#include "CityVacationBuilder.h"
#include "Hotel.h"
CityVacationBuilder::CityVacationBuilder()
{
    this->name="City Vacation Builder";
}

VacationBuilder *CityVacationBuilder::addAccommodation()
{
    accommodations.push_back(new Hotel());
    return this;
}

VacationBuilder *CityVacationBuilder::addAccommodation(std::string name)
{
    accommodations.push_back(new Hotel(name));
    return this;
}

VacationBuilder *CityVacationBuilder::addAccommodation(std::string name, int year, int month, int day, int nights, int location)
{
    Reservation *reservation=new Reservation();
    reservation->setArrivalDate(year,month,day);
    reservation->setNights(nights);

    Hotel *hotel=new Hotel(name);
    hotel->setReservation(reservation);
    hotel->setRoomNumber(location);
    accommodations.push_back(hotel);
    return this;
}

VacationBuilder *CityVacationBuilder::addEvent(std::string event)
{
    events.push_back("See the " + event + " show");
    return this;
}

CityVacationBuilder::~CityVacationBuilder()
{

}
