#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"
#include <iostream>
using std::cout;
using std::endl;


RubberDuck::RubberDuck()
{
    cout<<"function RubberDuck"<<endl;
    quackBehavior=new Squeak();
    flyBehavior=new FlyNoWay();
}

RubberDuck::RubberDuck(FlyBehavior *f, QuackBehavior *q):Duck()
{
    cout<<"function RubberDuck"<<endl;
    flyBehavior=f;
    quackBehavior=q;
}

void RubberDuck::display()
{
    cout<<"look like RubberDuck"<<endl;
}

RubberDuck::~RubberDuck()
{
    cout<<"function ~RubberDuck"<<endl;
}
