#include <iostream>
#include "Waitress.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "Menu.h"
using namespace std;

int main()
{
    Menu *pancakeHouseMenu = new PancakeHouseMenu();
    Menu *dinerMenu = new DinerMenu();
    Waitress *waitress = new Waitress(pancakeHouseMenu, dinerMenu);
    waitress->printMenu();
    return 0;
}
