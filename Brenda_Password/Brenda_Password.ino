void setup(){
  Serial.begin(9600);




Serial.println("Would you like to use pin or password?");
    while(Serial.available()==0){};
    choice=Serial.readString();
}
