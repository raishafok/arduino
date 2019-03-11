#include<Servo.h>
Servo my;


void setup() {
  // put your setup code here, to run once:
my.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
my.write(0);
delay(2000);

my.write(90);
delay(1000);
my.write(180);
delay(1000);

}
