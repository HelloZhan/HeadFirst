#include "CaffeineBeverage.h"

void CaffeineBeverage::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    addCondiments();
}

void CaffeineBeverage::boilWater()
{
    cout<<"Boiling water"<<endl;
}

void CaffeineBeverage::pourInCup()
{
    cout<<"Pouring into cup"<<endl;
}

CaffeineBeverage::~CaffeineBeverage()
{

}
