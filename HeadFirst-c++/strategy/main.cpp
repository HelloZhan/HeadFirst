#include <iostream>
#include "MallardDuck.h"
#include "ReadheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "ModelDuck.h"
#include "FlyWithWings.h"
#include "Squeak.h"
#include "Duck.h"
#include "FlyRocketPowered.h"
using namespace std;

int main()
{
//    MallardDuck *a=new MallardDuck();
//    a->display();
//    delete a;
//    RubberDuck *b=new RubberDuck();
//    b->display();
//    delete b;
    MallardDuck *mallard=new MallardDuck();
    RubberDuck *rubber=new RubberDuck(new FlyWithWings(),new Squeak());
    DecoyDuck *decoy=new DecoyDuck();
    Duck *model=new ModelDuck();
    mallard->performQuack();
    rubber->performQuack();
    decoy->performQuack();


    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();

    delete mallard;
    delete rubber;
    delete decoy;
    delete model;
    return 0;
}
