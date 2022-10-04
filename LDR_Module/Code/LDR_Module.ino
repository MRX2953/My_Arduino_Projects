void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int Light = analogRead(A0);
  Serial.println(Light);
  // put your main code here, to run repeatedly:

}
