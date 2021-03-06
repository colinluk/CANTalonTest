#ifndef SingleMotor_H
#define SingleMotor_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class SingleMotor: public Subsystem
{
private:
	CANTalon* motor;
public:
	SingleMotor();
	void InitDefaultCommand();
	void setSpeed(double value);
	double getVoltage();
};

#endif
