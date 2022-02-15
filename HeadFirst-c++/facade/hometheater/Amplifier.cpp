#include "Amplifier.h"
#include "StreamingPlayer.h"
Amplifier::Amplifier(std::string description)
{
    this->description=description;
}

void Amplifier::on()
{
    cout<<description + " on"<<endl;
}

void Amplifier::off()
{
    cout<<description + " off"<<endl;
}

void Amplifier::setStereoSound()
{
    cout<<description + " stereo mode on"<<endl;
}

void Amplifier::setSurroundSound()
{
    cout<<description + " surround sound on (5 speakers, 1 subwoofer)"<<endl;
}

void Amplifier::setVolume(int level)
{
    cout<<description + " setting volume to " + std::to_string(level)<<endl;
}

void Amplifier::setTuner(Tuner *tuner)
{
    cout<<description + " setting tuner to " + player->toString()<<endl;
    this->tuner=tuner;
}

void Amplifier::setStreamingPlayer(StreamingPlayer *player)
{
    cout<<description + " setting Streaming player to " + player->toString()<<endl;
    this->player=player;
}

string Amplifier::toString()
{
    return description;
}
