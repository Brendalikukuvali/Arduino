
#define ENC_DATA_PIN       10
#define ENC_CLK_PIN        11
#define ENC_SW_PIN         12
#define INCREMENT           1
#define SERVO_PIN           3
#define SERVO_INTERVAL     30 // [ms] time between servo steps
#define MIN_ANGLE           0
#define MAX_ANGLE         180

byte enc_clk,    enc_clk_old;
byte enc_switch, enc_switch_old;
byte pointer; // pointer to setpoint[pointer]
int angle = (MIN_ANGLE + MAX_ANGLE) / 2;
int setpoint[2] = {angle, angle + 10}; //startup angles
unsigned long timeforservo;

#include <Servo.h>
Servo servo;

void setup() {
  pinMode (ENC_CLK_PIN,INPUT_PULLUP);
  pinMode (ENC_DATA_PIN,INPUT_PULLUP);
  pinMode (ENC_SW_PIN,INPUT_PULLUP);
  servo.attach(SERVO_PIN);
  Serial.begin (9600);
  Serial.print("SETPOINT");
  Serial.println(setpoint[pointer]);
  enc_clk_old    = digitalRead(ENC_CLK_PIN);
  enc_switch_old = digitalRead(ENC_SW_PIN);
}

void loop()
{
  void Change_Servo():
  void Modify_Servo();
  void Rotate_Servo(); 
}
}

