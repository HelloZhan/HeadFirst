#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>
using std::string;
class MenuItem{
public:
    string name;
    string description;
    bool vegetarian;
    double price;
    MenuItem();
    MenuItem(string name,string description,bool vegetarian,double price);
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetarian();
    string toString();
};

#endif // MENUITEM_H
