#include "Menu.h"

Menu::Menu(std::string name, std::string description)
{
    this->name=name;
    this->description=description;
}

void Menu::add(MenuComponent *menuComponent)
{
    menuComponents.push_back(menuComponent);
}

void Menu::remove(MenuComponent *menuComponent)
{
    for(auto it=menuComponents.begin();it!=menuComponents.end();it++){
        if(*it==menuComponent){
            menuComponents.erase(it);
            break;
        }
    }
}

MenuComponent *Menu::getChild(int i)
{
    return menuComponents[i];
}

string Menu::getName()
{
    return name;
}

string Menu::getDescription()
{
    return description;
}

void Menu::print()
{
    cout<<"\n" + getName();
    cout<<", " + getDescription()<<endl;
    cout<<"---------------------"<<endl;
    for(auto it:menuComponents){
        it->print();
    }
}

Menu::~Menu()
{

}
