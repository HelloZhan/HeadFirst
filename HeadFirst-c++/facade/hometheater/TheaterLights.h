#ifndef THEATERLIGHTS_H
#define THEATERLIGHTS_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class TheaterLights{
public:
    TheaterLights(string description);
    void on();
    void off();
    void dim(int level);
    string toString();
private:
    string description;
};

#endif // THEATERLIGHTS_H
