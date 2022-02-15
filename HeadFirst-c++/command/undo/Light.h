#ifndef LIGHT_H
#define LIGHT_H
#include <string>
using std::string;
class Light{
public:
    string location;
    int level;
    Light(string location);
    void on();
    void off();
    void dim(int level);
    int getLevel();
};

#endif // LIGHT_H
