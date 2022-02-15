#include <iostream>
#include "RemoteControlWithUndo.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "CeilingFan.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanLowCommand.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFanOffCommand.h"
using namespace std;

int main()
{
    RemoteControlWithUndo *remoteControl = new RemoteControlWithUndo();

    Light *livingRoomLight = new Light("Living Room");

    LightOnCommand *livingRoomLightOn =
            new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff =
            new LightOffCommand(livingRoomLight);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    cout<<remoteControl->toString()<<endl;
    remoteControl->undoButtonWasPushed();
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(0);
    cout<<remoteControl->toString()<<endl;
    remoteControl->undoButtonWasPushed();

    CeilingFan *ceilingFan = new CeilingFan("Living Room");

    CeilingFanMediumCommand *ceilingFanMedium =
            new CeilingFanMediumCommand(ceilingFan);
    CeilingFanHighCommand *ceilingFanHigh =
            new CeilingFanHighCommand(ceilingFan);
    CeilingFanOffCommand *ceilingFanOff =
            new CeilingFanOffCommand(ceilingFan);

    remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
    remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    cout<<remoteControl->toString()<<endl;
    remoteControl->undoButtonWasPushed();

    remoteControl->onButtonWasPushed(1);
    cout<<remoteControl->toString()<<endl;
    remoteControl->undoButtonWasPushed();
    return 0;
}
