#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanHighCommand:public Command{
public:
    CeilingFanHighCommand(CeilingFan *ceilingFan);
    virtual void execute()override final;
    virtual void undo()override final;
    virtual ~CeilingFanHighCommand();
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANHIGHCOMMAND_H
