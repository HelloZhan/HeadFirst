#include "Hotel.h"


Hotel::Hotel()
{
    name="Hotel";
}

Hotel::Hotel(std::string name)
{
    this->name=name;
}

void Hotel::setRoomNumber(int n)
{
    roomNumber=n;
}

int Hotel::getRoomNumber()
{
    return roomNumber;
}

string Hotel::getLocation()
{
    if(roomNumber==0)return "";
    else return "Room number " + std::to_string(roomNumber);
}

Hotel::~Hotel()
{

}
