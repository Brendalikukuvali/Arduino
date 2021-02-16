void EncPin2(){
  enc_switch_old = enc_switch;   
enc_clk = digitalRead(ENC_CLK_PIN);  
if((enc_clk == 1) && (enc_clk_old == 0)) { 
  setpoint[pointer] = setpoint[pointer] + INCREMENT;    
  else setpoint[pointer] = setpoint[pointer] - INCREMENT;    
  if(setpoint[pointer] > MAX_ANGLE) setpoint[pointer] = MAX_ANGLE;    
  if(setpoint[pointer] < MIN_ANGLE) setpoint[pointer] = MIN_ANGLE;    
  Serial.println(setpoint[pointer]);    
  delay(10);  
  }  
  enc_clk_old = enc_clk;
} 
