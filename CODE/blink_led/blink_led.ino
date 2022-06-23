void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(12,HIGH);
  Serial.println("Led 1 is on");
  digitalWrite(10,LOW);
  Serial.println("Led 2 is off");
  delay(700);
  digitalWrite(12,LOW);
  Serial.println("Led 1 is off");
  digitalWrite(10,HIGH);
  Serial.println("Led 2 is on");
  delay(700);
  // put your main code here, to run repeatedly:

}
