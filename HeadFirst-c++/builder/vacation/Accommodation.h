#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H
#include "Reservation.h"
#include <string>
using std::string;
class Accommodation{
public:
    void setReservation(Reservation *r);
    Reservation *getReservation();
    virtual string getLocation()=0;
    string toString();
    virtual ~Accommodation();
    string name;
    Reservation *reservation=nullptr;
};

#endif // ACCOMMODATION_H
