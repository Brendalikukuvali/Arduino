int Red=11;
int Amber=12;
int Green=13;

void setup(){pinMode(Red,OUTPUT);
pinMode(Amber,OUTPUT);
pinMode(Green,OUTPUT);
}
void loop() {
  digitalWrite(Red,HIGH);
  delay(500);
  digitalWrite(Red,LOW);
  delay(500);
  digitalWrite(Amber,HIGH);
  delay(500);
  digitalWrite(Amber,LOW);
  delay(500);
  digitalWrite(Green,HIGH);
  delay(500);
  digitalWrite(Green,LOW);
  delay(500);
  
  
  

}
