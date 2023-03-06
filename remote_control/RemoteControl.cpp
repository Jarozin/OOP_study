#include "RemoteControl.h"

RemoteControl::RemoteControl()
{
    for (int i = 0; i < 7; i++)
    {
        on_commands[i] = new noCommand();
        off_commands[i] = new noCommand();
    }
}

RemoteControl::~RemoteControl()
{

}

void RemoteControl::setSlotCommand(int slot, Command *on_command, Command *off_command)
{
    on_commands[slot] = on_command;
    off_commands[slot] = off_command;
}


void RemoteControl::offButtonPress(int slot)
{
    off_commands[slot]->Execute();
    last = off_commands[slot];
}

void RemoteControl::onButtonPress(int slot)
{
    on_commands[slot]->Execute();
    last = on_commands[slot];
}

void RemoteControl::Undo()
{
    last->Undo();
}