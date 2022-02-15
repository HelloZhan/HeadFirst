#ifndef SAUCE_H
#define SAUCE_H
#include <string>
using std::string;
class Sauce{
public:
    virtual string toString()=0;
    virtual ~Sauce(){};
};

#endif // SAUCE_H
