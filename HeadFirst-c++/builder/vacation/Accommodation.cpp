#include "Accommodation.h"

void Accommodation::setReservation(Reservation *r)
{
    this->reservation=r;
}

Reservation *Accommodation::getReservation()
{
    return reservation;
}

string Accommodation::toString()
{
    string display="";
    display.append("You're staying at " + name);
    if (this->reservation != nullptr) {
        display.append("\nYou have a reservation for arrival date: " + reservation->getArrivalDate().toString() +
                       ", staying for " + std::to_string(reservation->getNights()) + " nights");
    }
    if (this->getLocation() != "") {
        display.append(" in " + this->getLocation());
    }
    display.append("\n");
    return display;
}

Accommodation::~Accommodation()
{
    delete reservation;
}
