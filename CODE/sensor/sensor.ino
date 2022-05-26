void setup() {
  pinMode(12,INPUT);// configure port 12 as input
  Serial.begin(9600);// initialize communication
  // put your setup code here, to run once:

}

void loop() {
  int IR_state = digitalRead(12);// read data on pin 12
  Serial.println(IR_state);// print sensor state on serial monitor
  // put your main code here, to run repeatedly:

}
