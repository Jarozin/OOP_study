#include "LightsOnCommand.h"


LightsOnCommand::~LightsOnCommand()
{

}
void LightsOnCommand::Execute()
{
    light->LightsOn();
}

void LightsOnCommand::Undo()
{
    light->LightsOff();
}
LightsOnCommand::LightsOnCommand(Light *light)
{
    this->light = light;
}
