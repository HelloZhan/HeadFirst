#include <iostream>
#include "ChocolateBoiler.h"
using namespace std;

int main()
{
    ChocolateBoiler *boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    // will return the existing instance
    //ChocolateBoiler *boiler2 = ChocolateBoiler::getInstance();
    return 0;
}
