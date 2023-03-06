#ifndef COMMAND_H
#define COMMAND_H

#pragma once

class Command
{
public:
    Command();
    virtual ~Command() = 0;
    virtual void Execute() = 0;
    virtual void Undo() = 0;
private:

};

#endif