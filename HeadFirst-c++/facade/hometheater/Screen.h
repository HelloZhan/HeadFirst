#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Screen{
public:
    Screen(string description);
    void up();
    void down();
    string toString();
private:
    string description;
};

#endif // SCREEN_H
