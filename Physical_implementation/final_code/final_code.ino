#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;


void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT0)l

}

void loop() {
  // put your main code here, to run repeatedly:

}
