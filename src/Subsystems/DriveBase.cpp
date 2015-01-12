#include <Commands/PotatoDrive.h>
#include "DriveBase.h"
#include "../RobotMap.h"

DriveBase::DriveBase() :
        Subsystem("DriverBase") {
    motor_a = new Talon(Motor_a_Pos);
    motor_b = new Talon(Motor_b_Pos);
    motor_c = new Talon(Motor_c_Pos);
    motor_d = new Talon(Motor_d_Pos);
}

DriveBase::~DriveBase() {
    delete motor_a;
    delete motor_b;
    delete motor_c;
    delete motor_d;
}

void DriveBase::Drive(double vX, double vY, double vR, double Throttle) {
    motor_a->Set(vX);
    motor_b->Set(vX);
    motor_c->Set(vX);
    motor_d->Set(vX);
}

void DriveBase::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    //SetDefaultCommand(new MySpecialCommand());
    SetDefaultCommand(new PotatoDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

