#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanOffCommand:public Command{
public:
    CeilingFanOffCommand(CeilingFan *ceilingFan);
    virtual void execute()override final;
    virtual void undo()override final;
    virtual ~CeilingFanOffCommand();
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANOFFCOMMAND_H
