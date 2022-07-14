#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;


void setup() {
  servo1.attach(2); //servo output
  servo2.attach(3); //servo output
  servo3.attach(4); //servo output
  servo4.attach(5); //servo output
  Serial.begin(9600);
  pinMode(6, OUTPUT); //dc
  pinMode(7, OUTPUT); //dc
  pinMode(8, INPUT); //ir
  pinMode(9, INPUT); //ir
  pinMode(10, INPUT); //ir
  pinMode(11, INPUT); //ir
  pinMode(26, OUTPUT); //led
  pinMode(27, OUTPUT); //led
  pinMode(28, OUTPUT); //led
  pinMode(29, OUTPUT); //led
  pinMode(30, OUTPUT); //buzzer

}

void loop() {
  // put your main code here, to run repeatedly:

}
