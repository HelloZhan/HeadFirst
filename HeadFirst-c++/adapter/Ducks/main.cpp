#include <iostream>
#include "Duck.h"
#include "DuckAdapter.h"
#include "MallardDuck.h"
#include "Turkey.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"
using namespace std;
void testDuck(Duck *duck){
    duck->quack();
    duck->fly();
}
int main()
{
    //DuckTestDrive
    Duck *duck = new MallardDuck();

    Turkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);

    cout<<"The Turkey says..."<<endl;
    turkey->gobble();
    turkey->fly();

    cout<<"\nThe Duck says..."<<endl;
    testDuck(duck);

    cout<<"\nThe TurkeyAdapter says..."<<endl;
    testDuck(turkeyAdapter);

    //TurkeyTestDrive
//    MallardDuck *duck = new MallardDuck();
//    Turkey *duckAdapter = new DuckAdapter(duck);

//    for(int i=0;i<10;i++) {
//        cout<<"The DuckAdapter says..."<<endl;
//        duckAdapter->gobble();
//        duckAdapter->fly();
//    }
    return 0;
}
