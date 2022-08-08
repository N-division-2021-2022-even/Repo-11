void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(3000);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(3000);

  // put your main code here, to run repeatedly:

}
