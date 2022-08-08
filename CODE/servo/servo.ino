#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
void setup() {
  pinMode(51, OUTPUT);
  pinMode(53, INPUT);
  pinMode(12, INPUT);//ir1
  pinMode(11, INPUT); //ir2
  pinMode(10, INPUT); //ir3
  pinMode(9, INPUT); //ir4
  pinMode(2, OUTPUT);//dc
  pinMode(3, OUTPUT);//dc
  
  s1.attach(4);
  s2.attach(5);
  s3.attach(6);
  s4.attach(7);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  delay(1000);
  s4.write(0);
  delay(1000);
  s3.write(180);
  delay(1000);
  s2.write(180);
  delay(1000);
  s1.write(90);
  delay(1000);
  

 while(digitalRead(12)!=0) 
{
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
}

digitalWrite(2,LOW);
digitalWrite(3,LOW);
 

        s4.write(90);
        delay(5000);
        s4.write(0);
        delay(500);

delay(1000);
      while(digitalRead(11)!=0)
      {
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
      }
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);

        s3.write(130);
        delay(200);
        s3.write(180);
        delay(200);
        s3.write(130);
        delay(200);
        s3.write(180);
        delay(200);
delay(1000);
      while(digitalRead(10)!=0)
      {
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
      }
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      

        s2.write(160);
        delay(200);
        s2.write(180);
        delay(200);
delay(1000);
      while(digitalRead(9)!=0)
      {
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
      }
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);

        s1.write(180);
        delay(1000);
        s1.write(90);
        delay(500);

      delay(1000);
      if(digitalRead(9)==0)
      {
            while(digitalRead(12)!=0)
            {
                digitalWrite(2,HIGH);
                digitalWrite(3,LOW);
            }
            digitalWrite(2,LOW);
            digitalWrite(3,LOW);
      }
}
