#ifndef POPCORNPOPPER_H
#define POPCORNPOPPER_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class PopcornPopper{
public:
    PopcornPopper(string description);
    void on();
    void off();
    void pop();
    string toString();
private:
    string description;
};

#endif // POPCORNPOPPER_H
