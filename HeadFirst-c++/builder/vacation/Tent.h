#ifndef TENT_H
#define TENT_H
#include "Accommodation.h"
class Tent:public Accommodation{
public:
    Tent();
    Tent(string name);
    void setSiteNumber(int n);
    int getSiteNumber();
    virtual string getLocation()override final;
    virtual ~Tent();
private:
    int siteNumber;
};

#endif // TENT_H
