.void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, INPUT);
}

void loop() {
  int sensor = digitalRead(12);
  Serial.println(sensor);
  
  // put your main code here, to run repeatedly:

}
