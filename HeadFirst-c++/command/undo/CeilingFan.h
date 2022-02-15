#ifndef CEILINGFAN_H
#define CEILINGFAN_H
#include <string>
using std::string;
enum{OFF,LOW,MEDIUM,HIGH};
class CeilingFan{
public:
    string location;
    int speed;
    CeilingFan(string location);
    void high();
    void medium();
    void low();
    void off();
    int getSpeed();
};

#endif // CEILINGFAN_H
