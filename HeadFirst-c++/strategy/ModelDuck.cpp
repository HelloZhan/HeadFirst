#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include <iostream>
using std::cout;
using std::endl;

ModelDuck::ModelDuck()
{
    cout<<"function ModelDuck"<<endl;
    flyBehavior=new FlyNoWay();
    quackBehavior=new Quack();
}

void ModelDuck::display()
{
    cout<<"look like ModelDuck"<<endl;
}

ModelDuck::~ModelDuck()
{
    cout<<"function ~ModelDuck"<<endl;
}
