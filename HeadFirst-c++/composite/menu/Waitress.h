#ifndef WAITRESS_H
#define WAITRESS_H
#include "MenuComponent.h"
class Waitress{
public:
    Waitress(MenuComponent *allMenus);
    void printMenu();
    virtual ~Waitress();
private:
    MenuComponent *allMenus;
};

#endif // WAITRESS_H
