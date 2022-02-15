#include "TeaWithHook.h"

void TeaWithHook::brew()
{
    cout<<"Steeping the tea"<<endl;
}

void TeaWithHook::addCondiments()
{
    cout<<"Adding Lemon"<<endl;
}

bool TeaWithHook::customerWantsCondiments()
{
    string answer=getUserInput();
    if(answer[0]=='Y'||answer[0]=='y')return true;
    else return false;
}

string TeaWithHook::getUserInput()
{
    string answer;
    cout<<"Would you like milk and sugar with your coffee (y/n)? "<<endl;
    cin>>answer;
    return answer;
}
