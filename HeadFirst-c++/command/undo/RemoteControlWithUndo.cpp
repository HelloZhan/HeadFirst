#include "RemoteControlWithUndo.h"
RemoteControlWithUndo::RemoteControlWithUndo()
{
    onCommands.resize(7);
    offCommands.resize(7);

    Command *noCommand=new NoCommand();
    for(int i=0;i<7;i++){
        onCommands[i]=noCommand;
        offCommands[i]=noCommand;
    }
    undoCommand=noCommand;
}

void RemoteControlWithUndo::setCommand(int slot, Command *onCommand, Command *offCommand)
{
    onCommands[slot]=onCommand;
    offCommands[slot]=offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot)
{
    onCommands[slot]->execute();
    undoCommand=onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot)
{
    offCommands[slot]->execute();
    undoCommand=offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed()
{
    undoCommand->undo();
}

string RemoteControlWithUndo::toString()
{
    string stringBuff="\n------ Remote Control -------\n";
    for(std::size_t i=0;i<onCommands.size();i++){
        stringBuff+="[slot "+std::to_string(i)+"] "+onCommands[i]->name+"  "+offCommands[i]->name+"\n";

    }
    stringBuff+="[undo] "+undoCommand->name+"\n";
    return stringBuff;
}

RemoteControlWithUndo::~RemoteControlWithUndo()
{

}
