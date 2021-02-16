void LED_Green(){
  if (Mycolor=="password"){ 
    
  }
  Serial.println("Enter your password here");
  while(Serial.available()==""){}
  GREEN=Serial.parseInt();
  
  for(int i=1;i<=GREEN;i++){
    digitalWrite(Green,HIGH);
    delay(500);
    digitalWrite(Green,LOW);
    delay(500);
    
  }
}


