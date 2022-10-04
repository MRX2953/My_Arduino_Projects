void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3,INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  
  Serial.print(digitalRead(3));
  digitalWrite(12,digitalRead(3) );
  Serial.println(digitalRead(2));
  if (digitalRead(2)){
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
  // put your main code here, to run repeatedly:
  
}
