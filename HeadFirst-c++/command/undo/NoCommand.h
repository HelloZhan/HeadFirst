#ifndef NOCOMMAND_H
#define NOCOMMAND_H
#include "Command.h"
class NoCommand:public Command{
public:
    NoCommand(){name="NoCommand";};
    virtual void execute()override final{};
    virtual void undo()override final{};
    virtual ~NoCommand(){};
};

#endif // NOCOMMAND_H
