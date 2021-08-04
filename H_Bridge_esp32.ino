
#include <Robojax_L298N_DC_motor.h>

// motor 1 settings (Front Right)
#define CHA 0
#define ENA 19 // this pin must be PWM enabled pin if Arduino board is used
#define IN1 18
#define IN2 5

// motor 2 settings (Front Left)
#define IN3 17
#define IN4 16
#define ENB 4// this pin must be PWM enabled pin if Arduino board is used
#define CHB 1

const int CCW = 2; // do not change
const int CW  = 1; // do not change

#define motor1 1 // do not change
#define motor2 2 // do not change

// for two motors without debug information
Robojax_L298N_DC_motor robot(IN1, IN2, ENA, CHA,  IN3, IN4, ENB, CHB);

void setup() {
  Serial.begin(115200);
  robot.begin();
}

void loop() {

  // Move Forward
  robot.rotate(motor1, 60, CW);//run motor1 at 60% speed in CW direction
  robot.rotate(motor2, 60, CW);//run motor2 at 60% speed in CW direction
  
 delay(2000);

  // Stop Moving
  robot.brake(1);
  robot.brake(2);  
  delay(2000);

  // Move right
  robot.rotate(motor1, 60, CW);//run motor1 at 60% speed in CW direction
  delay(2000);
  robot.brake(1);
  delay(2000);

 
  // Move Left
  robot.rotate(motor2, 60, CW);//run motor1 at 60% speed in CW direction
  delay(2000);
  robot.brake(2);
  delay(2000);

  // Move Backward
  robot.rotate(motor1, 60, CCW);//run motor1 at 60% speed in CCW direction
  robot.rotate(motor2, 60, CCW);//run motor2 at 60% speed in CCW direction
  
 delay(2000);

  // Stop Moving
  robot.brake(1);
  robot.brake(2);  
  delay(2000);

}
