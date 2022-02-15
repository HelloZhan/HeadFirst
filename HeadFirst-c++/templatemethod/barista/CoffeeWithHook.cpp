#include "CoffeeWithHook.h"

void CoffeeWithHook::brew()
{
    cout<<"Dripping Coffee through filter"<<endl;
}

void CoffeeWithHook::addCondiments()
{
    cout<<"Adding Sugar and Milk"<<endl;
}

bool CoffeeWithHook::customerWantsCondiments()
{
    string answer=getUserInput();
    if(answer[0]=='Y'||answer[0]=='y')return true;
    else return false;
}

string CoffeeWithHook::getUserInput()
{
    string answer;
    cout<<"Would you like milk and sugar with your coffee (y/n)? "<<endl;
    cin>>answer;
    return answer;
}
