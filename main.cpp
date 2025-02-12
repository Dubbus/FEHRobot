#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHMotor.h>
#include <FEHServo.h>


int main(void) {
//standard declaration
DigitalEncoder WheelLeftEncoder(FEHIO::27);
DigitalEncoder WheelRight(FEHIO::07);
FEHMotor right_motor(FEHMotor::Motor2,9.0); 
FEHMotor left_motor(FEHMotor::Motor3,9.0);

while(WheelLeftEncoder.Counts() <= 10 && WheelRightEncoder.Counts() <= 10){
  right_motor.SetPercent(25);
  left_motor.SetPercent(25);
}
}