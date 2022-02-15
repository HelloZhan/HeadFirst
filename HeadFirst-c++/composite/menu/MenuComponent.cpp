#include "MenuComponent.h"

void MenuComponent::add(MenuComponent *menuComponent)
{
    cout<<"UnsupportedOperationException"<<endl;
}

void MenuComponent::remove(MenuComponent *menuComponent)
{
    cout<<"UnsupportedOperationException"<<endl;
}

MenuComponent *MenuComponent::getChild(int i)
{
    i++;
    cout<<"UnsupportedOperationException"<<endl;
    MenuComponent *menucomponent=new MenuComponent;
    return menucomponent;
}

string MenuComponent::getName()
{
    cout<<"UnsupportedOperationException"<<endl;
    return "";
}

string MenuComponent::getDescription()
{
    cout<<"UnsupportedOperationException"<<endl;
    return "";
}

double MenuComponent::getPrice()
{
    cout<<"UnsupportedOperationException"<<endl;
    return 0.0;
}

bool MenuComponent::isVegetarian()
{
    cout<<"UnsupportedOperationException"<<endl;
    return false;
}

void MenuComponent::print()
{
    cout<<"UnsupportedOperationException"<<endl;
}

MenuComponent::~MenuComponent()
{

}
