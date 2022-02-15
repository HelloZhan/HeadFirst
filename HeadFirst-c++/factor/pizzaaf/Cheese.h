#ifndef CHEESE_H
#define CHEESE_H
#include <string>
using std::string;
class Cheese{
public:
    virtual string toString()=0;
    virtual ~Cheese(){};
};

#endif // CHEESE_H
