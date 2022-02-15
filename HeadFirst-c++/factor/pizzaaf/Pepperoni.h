#ifndef PEPPERONI_H
#define PEPPERONI_H
#include <string>
using std::string;
class Pepperoni{
public:
    virtual string toString()=0;
    virtual ~Pepperoni(){};
};

#endif // PEPPERONI_H
