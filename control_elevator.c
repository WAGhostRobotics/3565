#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S2,     light,          sensorLightActive)
#pragma config(Sensor, S3,     ir,             sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S1_C2_1,     right,         tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     combine,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     left,          tmotorTetrix, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C3_2,     elevator,      tmotorTetrix, openLoop, encoder)
#pragma config(Servo,  srvo_S1_C1_1,    rGrab1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_2,    rGrab2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    bucket,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_1,    lGrab1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    lGrab2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_3,    servo9,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_4,    servo10,              tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo11,              tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo12,              tServoNone)

#include "NXTio.c";
task main()
{


	while(true)
	{
		string s = "Press right arrow/left arrow";
		print(s,2);
		s = "To control the elevator";
		print(s,3);
		if(nNxtButtonPressed == 1) { //Right arrow
			motor[elevator] = 50;
		}
		else if(nNxtButtonPressed == 2) {//left arrow
			motor[elevator] = -50;
		}
		else
		{
			motor[elevator] = 0;
		}
	}
}
