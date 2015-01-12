#include "OI.h"

OI::OI() {
    // Make a new Joystick on Port 1.
    JoyDrv = new Joystick(1);
    // Process operator interface input here.
}


double OI::getJoyDrvX() {
    return JoyDrv->GetX();
}

double OI::getJoyDrvY() {
    return JoyDrv->GetY();
}

double OI::getJoyDrvR() {
    return JoyDrv->GetTwist();
}

double OI::getJoyDrvThrottle() {
    return JoyDrv->GetThrottle();
}
