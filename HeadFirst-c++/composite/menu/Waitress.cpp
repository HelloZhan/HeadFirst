#include "Waitress.h"

Waitress::Waitress(MenuComponent *allMenus)
{
    this->allMenus=allMenus;
}

void Waitress::printMenu()
{
    allMenus->print();
}

Waitress::~Waitress()
{

}
