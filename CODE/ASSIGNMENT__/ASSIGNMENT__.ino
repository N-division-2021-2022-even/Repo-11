void setup() {
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int sensor = digitalRead(12);
  Serial.println(sensor);
  if(sensor == 0){
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);  
  }
  else{
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
  // put your main code here, to run repeatedly:

}
