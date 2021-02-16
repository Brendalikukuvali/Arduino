int BUTTONPin=8;
int LEDPin1=9;
int LEDPin2=10;
int LEDPin3=11;

int buttonState=0;

void setup() {
  pinMode(LEDPin1,OUTPUT);
  pinMode(BUTTONPin,INPUT);
  pinMode(LEDPin2,OUTPUT);

}

void loop() {
  buttonState=digitalRead(BUTTONPin);
  if(butonState = LOW);
  digitalWrite(LEDPin1,HIGH);
  else;
  digitalWrite(LEDPin1,LOW);

  digitalWrite(LEDPin1,HIGH);
  digitalWrite(LEDPin1,LOW);
  digitalWrite(pwm,255);
  delay(1000);

  digitalWrite(LEDPin1,HIGH);
  delay(1000);
  digitalWrite(LEDPin1,LOW);
  delay(1000);

  digitalWrite(LEDPin2,HIGH);
  delay(1000);
  digitalWrite(LEDPin2,LOW);
  delay(1000);

}
