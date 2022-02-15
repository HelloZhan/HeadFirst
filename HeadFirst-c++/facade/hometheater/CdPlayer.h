#ifndef CDPLAYER_H
#define CDPLAYER_H
#include <string>
#include <iostream>
#include "Amplifier.h"
using std::cout;
using std::endl;
using std::string;
class CdPlayer{
public:
    CdPlayer(string description, Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void play(string title);
    void play(int track);
    void stop();
    void pause();
    string toString();
private:
    string description;
    int currentTrack;
    Amplifier *amplifier;
    string title;
};

#endif // CDPLAYER_H
