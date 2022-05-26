void setup() {
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int sensor = digitalRead(12);
  if(sensor == 0){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  // put your main code here, to run repeatedly:

}
