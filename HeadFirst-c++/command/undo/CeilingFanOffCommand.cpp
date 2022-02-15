#include "CeilingFanOffCommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *ceilingFan)
{
    name="CeilingFanOffCommand";
    this->ceilingFan=ceilingFan;
}

void CeilingFanOffCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->off();
}

void CeilingFanOffCommand::undo()
{
    if (prevSpeed == HIGH) {
        ceilingFan->high();
    } else if (prevSpeed == MEDIUM) {
        ceilingFan->medium();
    } else if (prevSpeed == LOW) {
        ceilingFan->low();
    } else if (prevSpeed == OFF) {
        ceilingFan->off();
    }
}

CeilingFanOffCommand::~CeilingFanOffCommand()
{

}
