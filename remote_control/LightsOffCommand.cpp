#include "LightsOffCommand.h"

LightsOffCommand::~LightsOffCommand()
{

}

void LightsOffCommand::Execute()
{
    light->LightsOff();
}

void LightsOffCommand::Undo()
{
    light->LightsOn();
}
LightsOffCommand::LightsOffCommand(Light *light)
{
    this->light = light;
}
