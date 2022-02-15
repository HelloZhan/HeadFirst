#ifndef HOMETHEATERFACADE_H
#define HOMETHEATERFACADE_H
#include <string>
#include <iostream>
#include "Amplifier.h"
#include "Tuner.h"
#include "StreamingPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
using std::cout;
using std::endl;
using std::string;
class HomeTheaterFacade{
public:
    HomeTheaterFacade(    Amplifier *amp,
                          Tuner *tuner,
                          StreamingPlayer *player,
                          Projector *projector,
                          TheaterLights *lights,
                          Screen *screen,
                          PopcornPopper *popper);
    void watchMovie(string movie);
    void endMovie();
    void listenToRadio(double frequency);
    void endRadio();
private:
    Amplifier *amp;
    Tuner *tuner;
    StreamingPlayer *player;
    CdPlayer *cd;
    Projector *projector;
    TheaterLights *lights;
    Screen *screen;
    PopcornPopper *popper;
};

#endif // HOMETHEATERFACADE_H
