#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light *light)
{
    name="LightOffCommand";
    this->light=light;
}

void LightOffCommand::execute()
{
    level=light->getLevel();
    light->off();
}

void LightOffCommand::undo()
{
    light->dim(level);
}

LightOffCommand::~LightOffCommand()
{

}
