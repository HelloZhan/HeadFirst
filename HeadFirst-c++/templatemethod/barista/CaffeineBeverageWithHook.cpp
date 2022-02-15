#include "CaffeineBeverageWithHook.h"

void CaffeineBeverageWithHook::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    if(customerWantsCondiments()){
        addCondiments();
    }
}

void CaffeineBeverageWithHook::boilWater()
{
    cout<<"Boiling water"<<endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
    cout<<"Pouring into cup"<<endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments()
{
    return true;
}

CaffeineBeverageWithHook::~CaffeineBeverageWithHook()
{

}
