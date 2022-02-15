#include "StreamingPlayer.h"
#include "Amplifier.h"

StreamingPlayer::StreamingPlayer(std::string description, Amplifier *amplifier)
{
    this->description=description;
    this->amplifier=amplifier;
}

void StreamingPlayer::on()
{
    cout<<description + " on"<<endl;
}

void StreamingPlayer::off()
{
    cout<<description + " off"<<endl;
}

void StreamingPlayer::play(std::string movie)
{
    this->movie=movie;
    currentChapter=0;
    cout<<description + " playing \"" + movie + "\""<<endl;
}

void StreamingPlayer::play(int chapter)
{
    if(movie==""){
        cout<<description + " can't play chapter " +std::to_string(chapter) + " no movie selected"<<endl;
    }else{
        currentChapter=chapter;
        cout<<description + " playing chapter " + std::to_string(currentChapter) + " of \"" + movie + "\""<<endl;
    }
}

void StreamingPlayer::stop()
{
    currentChapter=0;
    cout<<description + " stopped \"" + movie + "\""<<endl;
}

void StreamingPlayer::pause()
{
    cout<<description + " paused \"" + movie + "\""<<endl;
}

void StreamingPlayer::setTwoChannelAudio()
{
    cout<<description + " set two channel audio"<<endl;
}

void StreamingPlayer::setSurroundAudio()
{
    cout<<description + " set surround audio"<<endl;
}

string StreamingPlayer::toString()
{
    return description;
}
