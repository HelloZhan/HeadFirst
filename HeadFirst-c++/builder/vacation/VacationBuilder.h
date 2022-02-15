#ifndef VACATIONBUILDER_H
#define VACATIONBUILDER_H
#include "Accommodation.h"
#include "Vacation.h"
#include <vector>
using std::vector;
class VacationBuilder{
public:
    virtual VacationBuilder *addAccommodation()=0;
    virtual VacationBuilder *addAccommodation(string name)=0;
    virtual VacationBuilder *addAccommodation(string name,
                                              int year,
                                              int month,
                                              int day,
                                              int nights,
                                              int location)=0;
    virtual VacationBuilder *addEvent(string event)=0;
    Vacation *getVacation(){
        Vacation *vacation=new Vacation();
        vacation->setName(name);
        vacation->setAccommodations(accommodations);
        vacation->setEvents(events);
        return vacation;
    }
    virtual ~VacationBuilder(){};

    string name;
    vector<Accommodation *> accommodations;
    vector<string> events;
};

#endif // VACATIONBUILDER_H
