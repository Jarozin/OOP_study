#include <iostream>
#include "Light.h"
#include "RemoteControl.h"
#include "LightsOnCommand.h"
#include "LightsOffCommand.h"
int main()
{
    RemoteControl rc;
    Light kitchen_light;
    LightsOnCommand lon(&kitchen_light);
    LightsOffCommand lof(&kitchen_light);
    rc.setSlotCommand(0, &lon, &lof);
    rc.onButtonPress(0);
    rc.offButtonPress(0);
    rc.onButtonPress(0);
    rc.Undo();
    rc.onButtonPress(2);
    rc.Undo();
    return 0;
}