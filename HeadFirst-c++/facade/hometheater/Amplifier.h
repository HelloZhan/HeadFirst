#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Tuner;
class StreamingPlayer;
class Amplifier{
public:
    Amplifier(string description);
    void on();
    void off();
    void setStereoSound();
    void setSurroundSound();
    void setVolume(int level);
    void setTuner(Tuner *tuner);
    void setStreamingPlayer(StreamingPlayer *player);
    string toString();
private:
    string description;
    Tuner *tuner;
    StreamingPlayer *player;
};

#endif // AMPLIFIER_H
