void Rotate_Servo()
enc_clk_old = enc_clk;

// ROTATE SERVO
  if (millis() > timeforservo) {
    timeforservo = millis() + SERVO_INTERVAL;
    if (angle < setpoint[pointer]) angle++;
    if (angle > setpoint[pointer]) angle--;
    servo.write(angle);
  }
