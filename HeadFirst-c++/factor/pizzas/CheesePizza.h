#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H
#include "Pizza.h"
class CheesePizza:public Pizza{
public:
    CheesePizza(){
        name = "Cheese Pizza";
        dough = "Regular Crust";
        sauce = "Marinara Pizza Sauce";
        toppings.push_back("Fresh Mozzarella");
        toppings.push_back("Parmesan");
    }
    virtual ~CheesePizza(){};
};

#endif // CHEESEPIZZA_H
