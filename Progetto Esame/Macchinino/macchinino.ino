#include <Servo.h> 
#include <SoftwareSerial.h>
#include <AFMotor.h>
#include <NewPing.h>
Servo myservo;

int SPEED = 180;

AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR12_1KHZ); 
AF_DCMotor motor4(4, MOTOR12_1KHZ);
SoftwareSerial bt(9, 10);

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  bt.begin(9600);

  motor1.setSpeed(SPEED);
  motor2.setSpeed(SPEED);
  motor3.setSpeed(SPEED);
  motor4.setSpeed(SPEED);
  myservo.attach(10);  
  myservo.write(90); 
  myservo.attach(10);  
  myservo.write(90); 
}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.setSpeed(180);
  motor2.setSpeed(180);
  motor3.setSpeed(180);
  motor4.setSpeed(180);

  /*motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);*/

}
