int Red=12;
int Blue=11;
int Green=13;

void setup(){   
   pinMode(Red,OUTPUT);
   pinMode(Blue,OUTPUT);
   pinMode(Green,OUTPUT);
  }
void loop() {
  for(int j=1;j<=10;j=j+1)
  {digitalWrite(Red,HIGH);
  delay(500);
  digitalWrite(Red,LOW);
  delay(500);
  
  }
for(int j=0;j<=8;j=j+1)
{digitalWrite(Amber,HIGH);
delay(500);
digitalWrite(Amber,LOW);
delay(500);
}
for(int j=1;j<=5;j=j+1)
{digitalWrite(Green,HIGH);
delay(500);
digitalWrite(Green,LOW);
delay(500);

}
}
