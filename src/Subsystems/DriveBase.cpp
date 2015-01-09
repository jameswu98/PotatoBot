#include <Commands/PotatoDrive.h>
#include "DriveBase.h"
#include "../RobotMap.h"

DriveBase::DriveBase():
		Subsystem("DriverBase")
{
	motor_a = new Talon(Motor_a_Pos);
	motor_b = new Talon(Motor_b_Pos);
	motor_c = new Talon(Motor_c_Pos);
	motor_d = new Talon(Motor_d_Pos);
}


void DriveBase::Drive (float v_x)
{
	motor_a->Set(v_x);
	motor_b->Set(v_x);
	motor_c->Set(v_x);
	motor_d->Set(v_x);
}

void DriveBase::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new PotatoDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

