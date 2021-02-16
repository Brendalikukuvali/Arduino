void motor()
{
if (counter==0)
  servo.write(50);//zero degrees
  else if (counter==1)
  servo.write(1000);
  else if (counter==2)
  servo.write(180);
  else if (counter==3)
 servo.write(200);
  //else reset the counter to 0 which resets the servo to zero degrees:
  else
  counter=0;
}
