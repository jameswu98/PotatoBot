#ifndef POTATODRIVE_H
#define POTATODRIVE_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Subsystems/DriveBase.h"

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
