#ifndef CLAMS_H
#define CLAMS_H
#include <string>
using std::string;
class Clams{
public:
    virtual string toString()=0;
    virtual ~Clams(){};
};

#endif // CLAMS_H
