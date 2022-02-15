#include <iostream>
#include "Singleton.h"
using namespace std;

int main()
{
    Singleton *singleton = Singleton::getInstance();
    cout<<singleton->getDescription()<<endl;
    return 0;
}
