// Starting of Program
int m1a = 4;
int m1b = 5;
int m2a =7;
int m2b = 6;
char val;
const int trigPin = 2;
const int echoPin = 3;
float duration, distance;

void setup() 
{  
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 13 set as output Pin
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/29.1;
  if ((distance<=10)){
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
   }
   else if ((distance>10)){
while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

  if( val == 'B') // Forward
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);
    }
  else if(val == 'F') // Backward
    {digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);  
       
    }
  
    else if(val == 'R') //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b, HIGH);
    }
    else if(val == 'L') //Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
    
  else if(val == 'S') //Stop
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
   }
}
