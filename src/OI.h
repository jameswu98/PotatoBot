#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
    Joystick* JoyDrv;

public:
    OI();

    Joystick* getJoyDrv();
    double getJoyDrvX();
    double getJoyDrvY();
    double getJoyDrvR();
    double getJoyDrvThrottle();
};

#endif
