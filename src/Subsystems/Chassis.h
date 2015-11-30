#ifndef DRIVE_BASE_H
#define DRIVE_BASE_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Talon.h"

class DriveBase: public Subsystem {
private:
    Talon* motor_a;
    Talon* motor_b;
    Talon* motor_c;
    Talon* motor_d;
public:
    DriveBase();
    ~DriveBase();
    void Drive(double vX, double vY, double vZ, double Throttle, double k);
    void InitDefaultCommand();
};

#endif
