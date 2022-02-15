#ifndef OUTDOORSVACATIONBUILDER_H
#define OUTDOORSVACATIONBUILDER_H
#include "VacationBuilder.h"
class OutdoorsVacationBuilder:public VacationBuilder{
public:
    OutdoorsVacationBuilder();
    virtual VacationBuilder *addAccommodation()override final;
    virtual VacationBuilder *addAccommodation(string name)override final;
    virtual VacationBuilder *addAccommodation(string name,
                                              int year,
                                              int month,
                                              int day,
                                              int nights,
                                              int location)override final;
    virtual VacationBuilder *addEvent(string event)override final;
    virtual ~OutdoorsVacationBuilder();
};

#endif // OUTDOORSVACATIONBUILDER_H
