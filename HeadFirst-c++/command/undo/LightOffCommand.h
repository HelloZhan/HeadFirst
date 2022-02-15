#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include "Command.h"
#include "Light.h"
class LightOffCommand:public Command{
public:
    LightOffCommand(Light *light);
    virtual void execute()override final;
    virtual void undo()override final;
    virtual ~LightOffCommand();
private:
    Light *light;
    int level;
};

#endif // LIGHTOFFCOMMAND_H
