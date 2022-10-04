int Number[]={2,3,4,5,6,7};
int gecikme = 100;
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<6;i++){
    pinMode(Number[i], OUTPUT);
  }
}

void loop() {
  for(int x=0;x<6;x++){
    digitalWrite(Number[x], HIGH);
    delay(gecikme);
    digitalWrite(Number[x], LOW);
    }
  for(int y=5;y>-1;y--){
    digitalWrite(Number[y], HIGH);
    delay(gecikme);
    digitalWrite(Number[y], LOW);
    }
    
  
  // put your main code here, to run repeatedly:

}
