#ifndef WAITRESS_H
#define WAITRESS_H
#include "Iterator.h"
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Menu.h"
class Waitress{
public:
    Waitress(Menu *pancakeHouseMenu, Menu *dinerMenu);
    void printMenu();
    void printVegetarianMenu();
    bool isItemVegetarian(string name);
    ~Waitress();
private:
    void printMenu(Iterator *iterator);
    void printVegetarianMenu(Iterator *iterator);
    bool isVegetarian(string name, Iterator *iterator);
    Menu *pancakeHouseMenu;
    Menu *dinerMenu;
};

#endif // WAITRESS_H
