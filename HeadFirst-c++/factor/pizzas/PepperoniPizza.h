#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H
#include "Pizza.h"
class PepperoniPizza:public Pizza{
public:
    PepperoniPizza(){
        name = "Pepperoni Pizza";
        dough = "Crust";
        sauce = "Marinara sauce";
        toppings.push_back("Sliced Pepperoni");
        toppings.push_back("Sliced Onion");
        toppings.push_back("Grated parmesan cheese");
    }
    virtual ~PepperoniPizza(){};
};

#endif // PEPPERONIPIZZA_H
