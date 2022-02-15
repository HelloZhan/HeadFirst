#include "CdPlayer.h"

CdPlayer::CdPlayer(std::string description, Amplifier *amplifier)
{
    this->description=description;
    this->amplifier=amplifier;
}

void CdPlayer::on()
{
    cout<<description + " on"<<endl;
}

void CdPlayer::off()
{
    cout<<description + " off"<<endl;
}

void CdPlayer::eject()
{
    title="";
    cout<<description + " eject"<<endl;
}

void CdPlayer::play(std::string title)
{
    this->title=title;
    currentTrack=0;
    cout<<description + " playing \"" + title + "\""<<endl;
}

void CdPlayer::play(int track)
{
    if(title==""){
        cout<<description + " can't play track " + std::to_string(currentTrack) +
              ", no cd inserted"<<endl;
    }else{
        currentTrack=track;
        cout<<description + " playing track " + std::to_string(currentTrack)<<endl;
    }
}

void CdPlayer::stop()
{
    currentTrack=0;
    cout<<description + " stopped"<<endl;
}

void CdPlayer::pause()
{
    cout<<description + " paused \"" + title + "\""<<endl;
}

string CdPlayer::toString()
{
    return description;
}
