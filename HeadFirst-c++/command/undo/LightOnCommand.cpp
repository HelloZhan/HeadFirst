#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light *light)
{
    name="LightOnCommand";
    this->light=light;
}

void LightOnCommand::execute()
{
    level=light->getLevel();
    light->on();
}

void LightOnCommand::undo()
{
    light->dim(level);
}

LightOnCommand::~LightOnCommand()
{

}
