void LED_Blue(){
  
  if(choice=="Blue")
  {
  Serial.println("How many times to Blink Blue LED");
  while(Serial.available()==0){};
  BlinkBlue=Serial.parseInt(); 
  
  for (int i=0;i<=BlinkBlue;i=i++)
  {
    digitalWrite(Blue,HIGH);
    delay(1000);
    digitalWrite(Blue,LOW);
    delay(1000);
  }
 }
}
