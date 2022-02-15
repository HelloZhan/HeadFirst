#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H
#include <string>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
class MenuComponent{
public:
    virtual void add(MenuComponent *menuComponent);
    virtual void remove(MenuComponent *menuComponent);
    virtual MenuComponent *getChild(int i);
    virtual string getName();
    virtual string getDescription();
    virtual double getPrice();
    virtual bool isVegetarian();
    virtual void print();
    virtual ~MenuComponent();
};

#endif // MENUCOMPONENT_H
