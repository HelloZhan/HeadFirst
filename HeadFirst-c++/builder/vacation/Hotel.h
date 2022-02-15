#ifndef HOTEL_H
#define HOTEL_H
#include "Accommodation.h"
class Hotel:public Accommodation{
public:
    Hotel();
    Hotel(string name);
    void setRoomNumber(int n);
    int getRoomNumber();
    virtual string getLocation()override final;
    virtual ~Hotel();
private:
    int roomNumber;
};

#endif // HOTEL_H
