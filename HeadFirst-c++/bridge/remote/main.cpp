#include <iostream>
#include "GenericRemote.h"
#include "SpecialRemote.h"
using namespace std;

int main()
{
    TVFactory *tvFactory=new TVFactory();
    SpecialRemote *remoteSony = new SpecialRemote(tvFactory);
    cout<<"Connect your remote to the TV"<<endl;
    remoteSony->setTV("Sony");
    remoteSony->on();
    remoteSony->up();
    remoteSony->down();
    remoteSony->off();

    GenericRemote *remoteLG = new GenericRemote(tvFactory);
    cout<<"Connect your remote to the TV"<<endl;
    remoteLG->setTV("LG");
    remoteLG->on();
    remoteLG->nextChannel();
    remoteLG->prevChannel();
    remoteLG->off();
    return 0;
}
