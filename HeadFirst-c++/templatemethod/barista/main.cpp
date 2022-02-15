#include <iostream>
#include "Tea.h"
#include "Coffee.h"
#include "TeaWithHook.h"
#include "CoffeeWithHook.h"
using namespace std;

int main()
{
    Tea *tea = new Tea();
    Coffee *coffee = new Coffee();

    cout<<"\nMaking tea..."<<endl;
    tea->prepareRecipe();

    cout<<"\nMaking coffee..."<<endl;
    coffee->prepareRecipe();

    TeaWithHook *teaHook = new TeaWithHook();
    CoffeeWithHook *coffeeHook = new CoffeeWithHook();

    cout<<"\nMaking tea..."<<endl;
    teaHook->prepareRecipe();

    cout<<"\nMaking coffee..."<<endl;
    coffeeHook->prepareRecipe();
    return 0;
}
