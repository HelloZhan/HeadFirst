#include "Tuner.h"

Tuner::Tuner(std::string description, Amplifier *amplifie)
{
    this->description=description;
}

void Tuner::on()
{
    cout<<description + " on"<<endl;
}

void Tuner::off()
{
    cout<<description + " off"<<endl;
}

void Tuner::setFrequency(double frequency)
{
    cout<<description + " setting frequency to " + std::to_string(frequency)<<endl;
    this->frequency=frequency;
}

void Tuner::setAm()
{
    cout<<description + " setting AM mode"<<endl;
}

void Tuner::setFm()
{
    cout<<description + " setting FM mode"<<endl;
}

string Tuner::toString()
{
    return description;
}
