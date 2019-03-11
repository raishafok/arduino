#include<AFMotor.h>
AF_DCMotor motor1(2);
#define ir_sensor 9
char uart_data;//SERIAL COMMUNICATION
int s = 0;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.setSpeed(100);
motor1.run(FORWARD);
delay(250);
motor1.setSpeed(255);
motor1.run(BACKWARD);
delay(1000);

}
