#include "HomeTheaterFacade.h"

HomeTheaterFacade::HomeTheaterFacade(Amplifier *amp, Tuner *tuner, StreamingPlayer *player, Projector *projector, TheaterLights *lights, Screen *screen, PopcornPopper *popper)
{
    this->amp=amp;
    this->tuner=tuner;
    this->player=player;
    this->projector=projector;
    this->screen=screen;
    this->lights=lights;
    this->popper=popper;
}

void HomeTheaterFacade::watchMovie(std::string movie)
{
    cout<<"Get ready to watch a movie..."<<endl;
    popper->on();
    popper->pop();
    lights->dim(10);
    screen->down();
    projector->on();
    projector->wideScreenMode();
    amp->on();
    amp->setStreamingPlayer(player);
    amp->setSurroundSound();
    amp->setVolume(5);
    player->on();
    player->play(movie);
}

void HomeTheaterFacade::endMovie()
{
    cout<<"Shutting movie theater down..."<<endl;
    popper->off();
    lights->on();
    screen->up();
    projector->off();
    amp->off();
    player->stop();
    player->off();
}

void HomeTheaterFacade::listenToRadio(double frequency)
{
    cout<<"Tuning in the airwaves..."<<endl;
    tuner->on();
    tuner->setFrequency(frequency);
    amp->on();
    amp->setVolume(5);
    amp->setTuner(tuner);
}

void HomeTheaterFacade::endRadio()
{
    cout<<"Shutting down the tuner..."<<endl;
    tuner->off();
    amp->off();
}
