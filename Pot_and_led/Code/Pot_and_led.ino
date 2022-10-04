int Pot=0;
void setup() {
  pinMode(11, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Pot=analogRead(A0);
  analogWrite(11,Pot);
  // put your main code here, to run repeatedly:

}
