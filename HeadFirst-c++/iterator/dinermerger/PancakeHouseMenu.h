#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H
#include "Menu.h"
#include "MenuItem.h"
#include "VectorIterator.h"
class PancakeHouseMenu:public Menu{
public:
    PancakeHouseMenu();
    void addItem(string name,string description,bool vegetarian, double price);
    MenuItem *getMenuItems();
    virtual Iterator *createIterator()override final;
    string toString();
    virtual ~PancakeHouseMenu();
private:
    vector<MenuItem *>menuItems;
};

#endif // PANCAKEHOUSEMENU_H
