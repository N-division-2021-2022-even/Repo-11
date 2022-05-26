void setup() {
  Serial.begin(9600);


  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available())
  {
    char Serial_data = Serial.read();
    Serial.println(Serial_data);
  }

  // put your main code here, to run repeatedly:

}
