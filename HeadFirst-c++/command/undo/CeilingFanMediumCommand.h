#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanMediumCommand:public Command{
public:
    CeilingFanMediumCommand(CeilingFan *ceilingFan);
    virtual void execute()override final;
    virtual void undo()override final;
    virtual ~CeilingFanMediumCommand();
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANMEDIUMCOMMAND_H
