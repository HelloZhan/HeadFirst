#include "MenuItem.h"

MenuItem::MenuItem()
{
    name="";
    description="";
    vegetarian=true;
    price=0;
}

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

string MenuItem::toString()
{
    return name+", $"+std::to_string(price)+"\n   " + description;
}
