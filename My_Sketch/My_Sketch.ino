#include<Servo.h>
//pushbutton pin
int buttonPin=9;
//servo pin
int servoPin=5;
Servo servo;
int counter=0; //variable to store a counter

void setup() {
  //pushbuttons to be input:
  pinMode(buttonPin,INPUT);
  servo.attach(servoPin);
 
}

void loop()
{
void Button();
void Motor();
}


