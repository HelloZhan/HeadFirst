#ifndef STREAMINGPLAYER_H
#define STREAMINGPLAYER_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Amplifier;
class StreamingPlayer{
public:
    StreamingPlayer(string description, Amplifier *amplifier);
    void on();
    void off();
    void play(string movie);
    void play(int chapter);
    void stop();
    void pause();
    void setTwoChannelAudio();
    void setSurroundAudio();
    string toString();
private:
    string description;
    int currentChapter;
    Amplifier *amplifier;
    string movie;
};

#endif // STREAMINGPLAYER_H
