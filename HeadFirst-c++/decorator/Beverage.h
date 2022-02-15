#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
enum Size{TALL, GRANDE, VENTI };
class Beverage{
public:
    Beverage();
    virtual string getDescription();
    virtual double cost()=0;
    virtual ~Beverage();
    string description="Unknow Beverage";
    void setSize(Size size);
    Size getSize();
private:
    Size size=TALL;
};

#endif // BEVERAGE_H
