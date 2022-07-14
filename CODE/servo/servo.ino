#include <Servo.h>
Servo s1;
void setup() {
  s1.attach(8);
  // put your setup code here, to run once:

}

void loop() {
  s1.write(130);
  delay(200);
  s1.write(175);
  delay(200);
  // put your main code here, to run repeatedly:

}
