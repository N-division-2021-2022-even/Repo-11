void setup() {
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(5000);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(5000);
  // put your main code here, to run repeatedly:

}
