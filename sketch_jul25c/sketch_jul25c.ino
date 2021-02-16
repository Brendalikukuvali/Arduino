  int Blue=12;
  int Red=11;
  int Green=10;
  int BlinkBlue;
  int BlinkRed;
  int BlinkGreen;
  String choice;
  
void setup() {
  pinMode(Blue,OUTPUT);
  pinMode(Red,OUTPUT);
  Serial.begin(9600);

  Serial.println("Which led to Blink");
  while(Serial.available()==0){};
  choice=Serial.parseInt();

}
  
void loop(){
  void LED_Blue();
  void LED_Red();
  void LED_Green();
  
 }
  
