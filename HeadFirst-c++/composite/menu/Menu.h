#ifndef MENU_H
#define MENU_H
#include "MenuComponent.h"
class Menu:public MenuComponent{
public:
    Menu(string name,string description);
    virtual void add(MenuComponent *menuComponent)override final;
    virtual void remove(MenuComponent *menuComponent)override final;
    virtual MenuComponent *getChild(int i)override final;
    virtual string getName()override final;
    virtual string getDescription()override final;
    virtual void print()override final;
    virtual ~Menu();
private:
    string name;
    string description;
    vector<MenuComponent *> menuComponents;
};

#endif // MENU_H
