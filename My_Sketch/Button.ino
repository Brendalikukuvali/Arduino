void button()
{
//local variable to hold pushbutton state:
int buttonState;
//read the digital state of buttonPin using digitalRead and store the value in buttonState:
 buttonState=digitalRead(buttonPin);
 if (buttonState == LOW)//light the LED
 {counter++;
  delay (500);}
}
