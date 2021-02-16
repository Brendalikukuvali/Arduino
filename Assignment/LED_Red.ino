void RedLED {
  Serial.println("Would you like to use a pin or a password?");
  while(Serial.available()==0){};
  Mycolor=Serial.readString();

  if(Mycolor=="pin"){
    Serial.println("Type your pin here");
    while(Serial.available()==0){}
    RED=Serial.parseInt();

    for(int i=1;i<=RED;i++){
      digitalWrite(Red,HIGH);
      delay(500);
      digitalWrite(Red,LOW);
      delay(500);
      

  }
}

