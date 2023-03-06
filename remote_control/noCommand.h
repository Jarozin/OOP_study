#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#pragma once
#include "Command.h"
class noCommand : public Command
{
public:
    noCommand();
    ~noCommand();
    void Execute() override;
    void Undo() override;
private:

};

#endif