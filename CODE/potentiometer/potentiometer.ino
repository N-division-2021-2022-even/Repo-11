void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  int pot = analogRead(A0);
  Serial.println(pot);
  /*analogWrite(8, pot/4);*/
  if(pot>0) {
    digitalWrite(8, 
  }
  // put your main code here, to run repeatedly:

}
