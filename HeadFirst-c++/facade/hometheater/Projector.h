#ifndef PROJECTOR_H
#define PROJECTOR_H
#include <string>
#include <iostream>
#include "StreamingPlayer.h"
using std::cout;
using std::endl;
using std::string;
class Projector{
public:
    Projector(string description, StreamingPlayer *player);
    void on();
    void off();
    void wideScreenMode();
    void tvMode();
    string toString();
private:
    string description;
    StreamingPlayer *player;
};

#endif // PROJECTOR_H
