#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include <iostream>
using std::cout;
using std::endl;
MallardDuck::MallardDuck()
{
    cout<<"function MallardDuck"<<endl;
    quackBehavior=new Quack();
    flyBehavior=new FlyWithWings();
}

void MallardDuck::display()
{
    cout<<"look like MallardDuck"<<endl;
}

MallardDuck::~MallardDuck()
{
    cout<<"function ~MallardDuck"<<endl;
}
