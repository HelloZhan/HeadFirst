#ifndef CEILINGFANLOWCOMMAND_H
#define CEILINGFANLOWCOMMAND_H
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanLowCommand:public Command{
public:
    CeilingFanLowCommand(CeilingFan *ceilingFan);
    virtual void execute()override final;
    virtual void undo()override final;
    virtual ~CeilingFanLowCommand();
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANLOWCOMMAND_H
