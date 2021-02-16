void Change_Servo()
{
  enc_switch = digitalRead(ENC_SW_PIN);
  if((enc_switch == 0) && (enc_switch_old == 1))
  {
    // 1->0 transition detected
  }
    pointer = (pointer + 1) % 2; // change servo setpoint
    Serial.print('SETPOINT');
    Serial.println(setpoint[pointer]);
    delay(10);
  }
