#include "CeilingFanHighCommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *ceilingFan)
{
    name="CeilingFanHighCommand";
    this->ceilingFan=ceilingFan;
}

void CeilingFanHighCommand::execute()
{
    prevSpeed=ceilingFan->getSpeed();
    ceilingFan->high();
}

void CeilingFanHighCommand::undo()
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

CeilingFanHighCommand::~CeilingFanHighCommand()
{

}
