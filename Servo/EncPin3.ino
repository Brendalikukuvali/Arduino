void EncPin3(){
  if(millis()>timeforservo){
    timeforservo=millis()+SERVO_INTERVAL;
    if(angle<setpoint[pointer])
    angle++;
    if(angle>setpoint[pointer])
    angle--;
    servo.write(angle);
  }
}

