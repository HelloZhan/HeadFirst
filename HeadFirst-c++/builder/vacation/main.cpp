#include <iostream>
#include "VacationBuilder.h"
#include "CityVacationBuilder.h"
#include "OutdoorsVacationBuilder.h"
using namespace std;

int main()
{
    VacationBuilder *outdoorsyVacationBuilder = new OutdoorsVacationBuilder();
    Vacation *outdoorsyVacation = outdoorsyVacationBuilder
            ->addAccommodation("Two person tent", 2020, 7, 1, 5, 34)
            ->addEvent("Beach")
            ->addAccommodation("Two person tent")
            ->addEvent("Mountains")
            ->getVacation();
    cout<<outdoorsyVacation->toString()<<endl;

    VacationBuilder *cityVacationBuilder = new CityVacationBuilder();
    Vacation *cityVacation = cityVacationBuilder
            ->addAccommodation("Grand Facadian", 2020, 8, 1, 5, 0)
            ->addAccommodation("Hotel Commander", 2020, 8, 6, 2, 0)
            ->addEvent("Cirque du Soleil")
            ->getVacation();
    cout<<cityVacation->toString()<<endl;
    return 0;
}
