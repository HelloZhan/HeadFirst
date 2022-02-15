#include "Vacation.h"

void Vacation::setName(std::string name)
{
    this->name=name;
}

void Vacation::setAccommodations(std::vector<Accommodation *> accommodations)
{
    this->accommodations=accommodations;
}

void Vacation::setEvents(vector<string> events)
{
    this->events=events;
}

string Vacation::toString()
{
    string display="";
    display.append("---- " + this->name + " ----\n");
    for (auto a : accommodations) {
        display.append(a->toString());
    }
    for (auto e : events) {
        display.append(e + "\n");
    }
    return display;
}
