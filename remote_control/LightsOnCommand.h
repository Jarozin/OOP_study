#ifndef LIGHTSONCOMMAND_H
#define LIGHTSONCOMMAND_H

#pragma once
#include "Command.h"
#include "Light.h"
class LightsOnCommand : public Command
{
public:
    LightsOnCommand(Light *light);
    ~LightsOnCommand();
    void Execute() override;
    void Undo() override;
private:
    Light *light;
};

#endif