#include <iostream>
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "WildTurkeyAdapter.h"
using namespace std;
void testDuck(Duck *duck){
    duck->quack();
    duck->fly();
}
int main()
{
    Duck *duck = new MallardDuck();

    Turkey *turkey = new WildTurkey();
    Duck *wildTurkeyAdapter = new WildTurkeyAdapter();

    cout<<"The Turkey says..."<<endl;
    turkey->gobble();
    turkey->fly();

    cout<<"\nThe Duck says..."<<endl;
    testDuck(duck);

    cout<<"\nThe WildTurkeyAdapter says..."<<endl;
    testDuck(wildTurkeyAdapter);
    return 0;
}
