#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
#include <iostream>
using std::cout;
using std::endl;

DecoyDuck::DecoyDuck()
{
    cout<<"function DecoyDuck"<<endl;
    flyBehavior=new FlyNoWay();
    quackBehavior=new MuteQuack();
}

void DecoyDuck::display()
{
    cout<<"look like DecoyDuck"<<endl;
}

DecoyDuck::~DecoyDuck()
{
    cout<<"function ~DecoyDuck"<<endl;
}
