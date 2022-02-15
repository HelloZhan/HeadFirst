#include "CeilingFanLowCommand.h"

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan *ceilingFan)
{
    name="CeilingFanLowCommand";
    this->ceilingFan=ceilingFan;
}

void CeilingFanLowCommand::execute()
{
    prevSpeed=ceilingFan->getSpeed();
    ceilingFan->low();
}

void CeilingFanLowCommand::undo()
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

CeilingFanLowCommand::~CeilingFanLowCommand()
{

}
