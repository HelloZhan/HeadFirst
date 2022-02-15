#include "Singleton.h"
//Singleton *Singleton::uniqueInstance=nullptr;
Singleton *Singleton::getInstance()
{
    //懒汉法（在类外声明uniqueInstance）
//    if(uniqueInstance==nullptr){
//        uniqueInstance=new Singleton();
//    }
//    return uniqueInstance;
    //局部静态变量方法(跟全局变量没区别）
    static Singleton uniqueInstance;
    return &uniqueInstance;
}

string Singleton::getDescription()
{
    return "I'm a classic Singleton!";
}

Singleton::Singleton()
{

}
