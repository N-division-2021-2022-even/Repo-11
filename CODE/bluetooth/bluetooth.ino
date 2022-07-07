void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  char data;
  data = Serial1.read();
  if(data=='1')
  digitalWrite(13, HIGH);
  else if(data=='0')
  digitalWrite(13, LOW);
  // put your main code here, to run repeatedly:

}
