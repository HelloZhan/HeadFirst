#ifndef REMOTECONTROLWITHUNDO_H
#define REMOTECONTROLWITHUNDO_H
#include "Command.h"
#include "NoCommand.h"
#include <vector>
using std::vector;
class RemoteControlWithUndo{
public:
    RemoteControlWithUndo();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();
    string toString();
    virtual ~RemoteControlWithUndo();
private:
    vector<Command *> onCommands;
    vector<Command *> offCommands;
    Command *undoCommand;
};

#endif // REMOTECONTROLWITHUNDO_H
