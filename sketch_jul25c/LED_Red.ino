void LED_Red(){
  
if(choice=="Red") {
  Serial.println("How many times to Blink Red LED");
  while(Serial.available()==0){};
  BlinkBlue=Serial.parseInt();
    
  for(int i=0;BlinkRed;i=i++)
  {
    digitalWrite(Red,HIGH);
    delay(1000);
    digitalWrite(Red,LOW);
    delay(1000);
    }
   }
}
