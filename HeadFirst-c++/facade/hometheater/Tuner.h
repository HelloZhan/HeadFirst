#ifndef TUNER_H
#define TUNER_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Amplifier;
class Tuner{
public:
    Tuner(string description,Amplifier *amplifie);
    void on();
    void off();
    void setFrequency(double frequency);
    void setAm();
    void setFm();
    string toString();
private:
    string description;
    Amplifier *amplifier;
    double frequency;
};

#endif // TUNER_H
