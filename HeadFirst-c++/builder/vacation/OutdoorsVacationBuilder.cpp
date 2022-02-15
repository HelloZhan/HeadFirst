#include "OutdoorsVacationBuilder.h"
#include "Tent.h"
OutdoorsVacationBuilder::OutdoorsVacationBuilder()
{
    name="Outdoorsy Vacation Builder";
}

VacationBuilder *OutdoorsVacationBuilder::addAccommodation()
{
    accommodations.push_back(new Tent());
    return this;
}

VacationBuilder *OutdoorsVacationBuilder::addAccommodation(std::string name)
{
    accommodations.push_back(new Tent(name));
    return this;
}

VacationBuilder *OutdoorsVacationBuilder::addAccommodation(std::string name, int year, int month, int day, int nights, int location)
{
    Reservation *reservation=new Reservation();
    reservation->setArrivalDate(year,month,day);
    reservation->setNights(nights);

    Tent *tent=new Tent(name);
    tent->setReservation(reservation);
    tent->setSiteNumber(location);
    accommodations.push_back(tent);
    return this;
}

VacationBuilder *OutdoorsVacationBuilder::addEvent(std::string event)
{
    events.push_back("Hike: " + event);
    return this;
}

OutdoorsVacationBuilder::~OutdoorsVacationBuilder()
{

}
