#ifndef DINERMENU_H
#define DINERMENU_H
#include "Menu.h"
#include "MenuItem.h"
#include "Iterator.h"
#include "ArrayIterator.h"
class DinerMenu:public Menu{
public:
    DinerMenu();
    void addItem(string name,string description,bool vegetarian, double price);
    MenuItem *getMenuItems();
    virtual Iterator *createIterator()override final;
    virtual ~DinerMenu();
private:
    int numberOfItems=0;
    MenuItem *menuItems;
};

#endif // DINERMENU_H
