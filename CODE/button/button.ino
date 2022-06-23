void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int state = digitalRead(6);
  if(state == 1)
  {
    digitalWrite(13, HIGH);
    Serial.println("LED ON");
  }
  else
  {
    digitalWrite(13, LOW);
    Serial.println("LED OFF");
  }
  // put your main code here, to run repeatedly:

}
