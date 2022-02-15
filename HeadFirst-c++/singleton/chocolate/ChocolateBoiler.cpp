#include "ChocolateBoiler.h"
#include <iostream>
using std::cout;
using std::endl;
ChocolateBoiler* ChocolateBoiler::uniqueInstance = NULL;
ChocolateBoiler *ChocolateBoiler::getInstance()
{
    //懒汉法（在类外声明uniqueInstance）
    if (uniqueInstance == NULL) {
        cout<<"Creating unique instance of Chocolate Boiler"<<endl;
        uniqueInstance = new ChocolateBoiler();
    }
    cout<<"Returning instance of Chocolate Boiler"<<endl;
    return uniqueInstance;
    //局部静态变量方法(跟全局变量没区别）
//    static ChocolateBoiler uniqueInstance;
//    return &uniqueInstance;
}

void ChocolateBoiler::fill()
{
    if(isEmpty()){
        empty=false;
        boiled=false;
    }
}

void ChocolateBoiler::drain()
{
    if(!isEmpty()&&isBoiled()){
        empty=true;
    }
}

void ChocolateBoiler::boil()
{
    if(!isEmpty()&&!isBoiled()){
        boiled=true;
    }
}

bool ChocolateBoiler::isEmpty()
{
    return empty;
}

bool ChocolateBoiler::isBoiled()
{
    return boiled;
}

ChocolateBoiler::ChocolateBoiler()
{
    empty=true;
    boiled=false;
}
