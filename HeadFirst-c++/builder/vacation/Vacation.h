#ifndef VACATION_H
#define VACATION_H
#include "Accommodation.h"
#include <vector>
using std::vector;
class Vacation{
public:
    void setName(string name);
    void setAccommodations(vector<Accommodation *> accommodations);
    void setEvents(vector<string> events);
    string toString();
private:
    string name;
    vector<string> events;
    vector<Accommodation *> accommodations;
};

#endif // VACATION_H
