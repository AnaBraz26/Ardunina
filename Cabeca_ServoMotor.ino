Servo Motor
#include <Servo.h> 
Servo servo;

void setup() {  
  motor.attach(9);
}

void loop() {
  motor.write(0);
  delay(1000);
  motor.write(90);
  delay(1000);
  motor.write(0);
  delay(1000);  
  motor.write(180)
  delay(1000);
  
}
