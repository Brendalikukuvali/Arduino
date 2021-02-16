void LED_Green(){
  
 if(choice=="Green"){
  Serial.println("How many times to Blink Green LED");
  while(Serial.available()==0){};
  BlinkBlue=Serial.parseInt();
    
  for(int i=0;BlinkGreen;i=i++)
  {
    digitalWrite(Green,HIGH);
    delay(1000);
    digitalWrite(Green,LOW);
    delay(1000);
    }
   }
}
