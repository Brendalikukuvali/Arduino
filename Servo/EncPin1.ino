void EncPin1(){  
enc_switch = digitalRead(ENC_SW_PIN);  
if((enc_switch == 0) && (enc_switch_old == 1)) {    
  Serial.println(setpoint[pointer]);    
  delay(10);  
}  
