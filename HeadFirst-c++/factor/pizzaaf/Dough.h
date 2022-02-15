#ifndef DOUGH_H
#define DOUGH_H
#include <string>
using std::string;
class Dough{
public:
    virtual string toString()=0;
    virtual ~Dough(){};
};

#endif // DOUGH_H
