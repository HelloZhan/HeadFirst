#include "MenuItem.h"

MenuItem::MenuItem(std::string name, std::string description, bool vegetarian, double price)
{
    this->name=name;
    this->description=description;
    this->vegetarian=vegetarian;
    this->price=price;
}

string MenuItem::getName()
{
    return name;
}

string MenuItem::getDescription()
{
    return description;
}

double MenuItem::getPrice()
{
    return price;
}

bool MenuItem::isVegetarian()
{
    return vegetarian;
}

void MenuItem::print()
{
    cout<<"  " + getName();
    if(isVegetarian())cout<<"(v)";
    cout<<", " + std::to_string(getPrice())<<endl;
    cout<<"     -- " + getDescription()<<endl;
}

MenuItem::~MenuItem()
{

}
