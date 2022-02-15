#ifndef CITYVACATIONBUILDER_H
#define CITYVACATIONBUILDER_H
#include "VacationBuilder.h"
class CityVacationBuilder:public VacationBuilder{
public:
    CityVacationBuilder();
    virtual VacationBuilder *addAccommodation()override final;
    virtual VacationBuilder *addAccommodation(string name)override final;
    virtual VacationBuilder *addAccommodation(string name,
                                              int year,
                                              int month,
                                              int day,
                                              int nights,
                                              int location)override final;
    virtual VacationBuilder *addEvent(string event)override final;
    virtual ~CityVacationBuilder();
};

#endif // CITYVACATIONBUILDER_H
