 
 void GreenLED()
{
  do{
  digitalWrite(Green,HIGH);
  delay(1000);
  digitalWrite(Green,LOW);
  delay(1000);
  }
  while(y<=50);
}
