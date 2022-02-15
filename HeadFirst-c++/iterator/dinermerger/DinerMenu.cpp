#include "DinerMenu.h"
#include "iostream"
int MAX_ITEMS = 6;
DinerMenu::DinerMenu()
{
    menuItems=new MenuItem[MAX_ITEMS];
    menuItems[0]=MenuItem("Vegetarian BLT",
                          "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    menuItems[1]=MenuItem("BLT",
                          "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    menuItems[2]=MenuItem("Soup of the day",
                          "Soup of the day, with a side of potato salad", false, 3.29);
    menuItems[3]=MenuItem("Hotdog",
                          "A hot dog, with sauerkraut, relish, onions, topped with cheese",
                          false, 3.05);
    menuItems[4]=MenuItem("Steamed Veggies and Brown Rice",
                          "Steamed vegetables over brown rice", true, 3.99);
    menuItems[5]=MenuItem("Pasta",
                          "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
                          true, 3.89);
    numberOfItems=6;
}

void DinerMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
    MenuItem menuItem=MenuItem(name,description,vegetarian,price);
    if(numberOfItems>=MAX_ITEMS){
        std::cout<<"Sorry, menu is full!  Can't add item to menu"<<std::endl;
    }else{
        menuItems[numberOfItems]=menuItem;
        numberOfItems++;
    }
}

MenuItem *DinerMenu::getMenuItems()
{
    return menuItems;
}

Iterator *DinerMenu::createIterator()
{
    return new ArrayIterator(menuItems,numberOfItems);
}

DinerMenu::~DinerMenu()
{

}
