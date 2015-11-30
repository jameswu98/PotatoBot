#ifndef POTATODRIVE_H
#define POTATODRIVE_H

#include <Subsystems/Chassis.h>
#include "../CommandBase.h"
#include "WPILib.h"

class PotatoDrive: public CommandBase {
public:
    PotatoDrive();
    void Initialize();
    void Execute();
    bool IsFinished();
    void End();
    void Interrupted();
};

#endif
