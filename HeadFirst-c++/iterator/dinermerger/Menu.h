#ifndef MENU_H
#define MENU_H
#include "Iterator.h"
class Menu{
public:
    virtual Iterator *createIterator()=0;
    virtual ~Menu(){};
};

#endif // MENU_H
