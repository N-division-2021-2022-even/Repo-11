#include <Servo.h>
Servo s1;
void setup() {
  s1.attach(8);
  // put your setup code here, to run once:

}

void loop() {
  s1.write(0);
  delay(2000);
  s1.write(45);
  delay(2000);
  // put your main code here, to run repeatedly:

}
