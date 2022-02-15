#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::vector;
class Pizza{
public:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
    string getName();
    void prepare();
    void bake();
    void cut();
    void box();
    string toString();
    virtual ~Pizza();
};
#endif // PIZZA_H
