#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H
#include "Pizza.h"
class ClamPizza:public Pizza{
public:
    ClamPizza(){
        name = "Clam Pizza";
        dough = "Thin crust";
        sauce = "White garlic sauce";
        toppings.push_back("Clams");
        toppings.push_back("Grated parmesan cheese");
    }
    virtual ~ClamPizza(){};
};

#endif // CLAMPIZZA_H
