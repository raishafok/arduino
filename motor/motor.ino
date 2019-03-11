#include<AFMotor.h>

AF_DCMotor motor3(2,MOTOR12_1KHZ);

void setup()
{
  // put your setup code here, to run once:
 
 
}

void loop()
{
 
    analogWrite(2,150);
    motor3.run(FORWARD);
    delay(300);
    
    
  }
 
