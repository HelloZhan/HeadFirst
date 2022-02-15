#include "PopcornPopper.h"

PopcornPopper::PopcornPopper(std::string description)
{
    this->description=description;
}

void PopcornPopper::on()
{
    cout<<description + " on"<<endl;
}

void PopcornPopper::off()
{
    cout<<description + " off"<<endl;
}

void PopcornPopper::pop()
{
    cout<<description + " popping popcorn!"<<endl;
}

string PopcornPopper::toString()
{
    return description;
}
