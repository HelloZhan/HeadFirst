#ifndef MENUITEM_H
#define MENUITEM_H
#include "MenuComponent.h"
class MenuItem:public MenuComponent{
public:
    MenuItem(string name,string description,bool vegetarian,double price);
    virtual string getName()override final;
    virtual string getDescription()override final;
    virtual double getPrice()override final;
    virtual bool isVegetarian()override final;
    virtual void print()override final;
    virtual ~MenuItem();
private:
    string name;
    string description;
    bool vegetarian;
    double price;
};

#endif // MENUITEM_H
