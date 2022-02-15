#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <vector>
#include <iostream>
#include "Cheese.h"
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Clams.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;
class Pizza{
public:
    string name;
    Dough *dough;
    Sauce *sauce;
    vector<Veggies*> veggies;
    Cheese *cheese;
    Pepperoni *pepperoni;
    Clams *clam;
    Pizza();
    virtual void prepare()=0;
    void bake();
    void cut();
    void box();
    void setName(string name);
    string getName();
    string toString();
    virtual ~Pizza();
};
#endif // PIZZA_H
