#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include "Command.h"
#include "Light.h"
class LightOnCommand:public Command{
public:
    LightOnCommand(Light *light);
    virtual void execute()override final;
    virtual void undo()override final;
    virtual ~LightOnCommand();
private:
    Light *light;
    int level;
};

#endif // LIGHTONCOMMAND_H
