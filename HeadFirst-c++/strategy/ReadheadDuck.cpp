#include "ReadheadDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include <iostream>
using std::cout;
using std::endl;

ReadheadDuck::ReadheadDuck()
{
    cout<<"function ReadheadDuck"<<endl;
    quackBehavior=new Quack();
    flyBehavior=new FlyWithWings();
}

void ReadheadDuck::display()
{
    cout<<"look like ReadheadDuck"<<endl;
}

ReadheadDuck::~ReadheadDuck()
{
    cout<<"function ~ReadheadDuck"<<endl;
}
