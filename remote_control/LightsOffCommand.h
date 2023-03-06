#ifndef LIGHTSOFFCOMMAND_H
#define LIGHTSOFFCOMMAND_H

#pragma once
#include "Command.h"
#include "Light.h"
class LightsOffCommand : public Command
{
public:
    LightsOffCommand(Light *light);
    ~LightsOffCommand();
    void Execute() override;
    void Undo() override;
private:
    Light *light;
};

#endif