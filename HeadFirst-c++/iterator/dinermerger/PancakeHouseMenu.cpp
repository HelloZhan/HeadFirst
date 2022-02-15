#include "PancakeHouseMenu.h"

PancakeHouseMenu::PancakeHouseMenu()
{
    menuItems.push_back(new MenuItem("K&B's Pancake Breakfast",
                                     "Pancakes with scrambled eggs and toast",
                                     true,
                                     2.99));
    menuItems.push_back(new MenuItem("Regular Pancake Breakfast",
                                     "Pancakes with fried eggs, sausage",
                                     false,
                                     2.99));
    menuItems.push_back(new MenuItem("Blueberry Pancakes",
                                     "Pancakes made with fresh blueberries",
                                     true,
                                     3.49));
    menuItems.push_back(new MenuItem("Waffles",
                                     "Waffles with your choice of blueberries or strawberries",
                                     true,
                                     3.59));

}

void PancakeHouseMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
    menuItems.push_back(new MenuItem(name,description,vegetarian,price));
}

MenuItem *PancakeHouseMenu::getMenuItems()
{
    return menuItems[0];
}

Iterator *PancakeHouseMenu::createIterator()
{
    return new VectorIterator(menuItems);
}

string PancakeHouseMenu::toString()
{
    return "Objectville Pancake House Menu";
}

PancakeHouseMenu::~PancakeHouseMenu()
{
    for(auto it:menuItems){
        delete it;
    }
}
