#include "Waitress.h"
#include <iostream>
using std::cout;
using std::endl;
Waitress::Waitress(Menu *pancakeHouseMenu, Menu *dinerMenu)
{
    this->pancakeHouseMenu=pancakeHouseMenu;
    this->dinerMenu=dinerMenu;
}

void Waitress::printMenu()
{
    Iterator *pancakeIterator=pancakeHouseMenu->createIterator();
    Iterator *dinerIterator=dinerMenu->createIterator();

    cout<<"MENU\n----\nBREAKFAST";
    printMenu(pancakeIterator);
    cout<<"\nLUNCH"<<endl;
    printMenu(dinerIterator);
}

void Waitress::printVegetarianMenu()
{
    printVegetarianMenu(pancakeHouseMenu->createIterator());
    printVegetarianMenu(dinerMenu->createIterator());
}

bool Waitress::isItemVegetarian(std::string name)
{
    Iterator *breakfastIterator = pancakeHouseMenu->createIterator();
    if(isVegetarian(name,breakfastIterator))return true;
    Iterator *dinnerIterator = dinerMenu->createIterator();
    if (isVegetarian(name, dinnerIterator)) {
        return true;
    }
    return false;

}

void Waitress::printMenu(Iterator *iterator)
{
    while(iterator->hasNext()){
        MenuItem *menuItem=iterator->next();
        cout<<menuItem->getName() + ", ";
        cout<<std::to_string(menuItem->getPrice()) + " -- ";
        cout<<menuItem->getDescription()<<endl;
    }
}

void Waitress::printVegetarianMenu(Iterator *iterator)
{
    while(iterator->hasNext()){
        MenuItem *menuItem=iterator->next();
        if(menuItem->isVegetarian()){
            cout<<menuItem->getName()<<endl;
            cout<<"\t\t" + std::to_string(menuItem->getPrice())<<endl;
            cout<<"\t" + menuItem->getDescription()<<endl;
        }
    }
}

bool Waitress::isVegetarian(std::string name, Iterator *iterator)
{
    while (iterator->hasNext()) {
        MenuItem *menuItem = iterator->next();
        if (menuItem->getName()==name) {
            if (menuItem->isVegetarian()) {
                return true;
            }
        }
    }
    return false;
}
