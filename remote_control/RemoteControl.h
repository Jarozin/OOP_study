#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#pragma once
#include "Command.h"
#include "noCommand.h"
class RemoteControl
{
public:
    RemoteControl();
    ~RemoteControl();
    void setSlotCommand(int slot, Command *on_command, Command *off_command);
    void offButtonPress(int);
    void onButtonPress(int);
    void Undo();
private:
    Command *last;
    Command *on_commands[7];
    Command *off_commands[7];
};

#endif