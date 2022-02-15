#ifndef VEGGIES_H
#define VEGGIES_H
#include <string>
using std::string;
class Veggies{
public:
    virtual string toString()=0;
    virtual ~Veggies(){};
};

#endif // VEGGIES_H
