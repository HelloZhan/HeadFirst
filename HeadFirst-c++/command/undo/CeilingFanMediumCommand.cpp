#include "CeilingFanMediumCommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *ceilingFan)
{
    name="CeilingFanMediumCommand";
    this->ceilingFan=ceilingFan;
}

void CeilingFanMediumCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
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

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{

}
