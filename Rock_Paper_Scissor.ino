#include <Servo.h>
#include <math.h>
Servo rock_servo;
Servo paper_servo;
Servo scissor_servo;

void setup() {
  paper_servo.attach(9);
  scissor_servo.attach(10);
    paper_servo.write(0);
    delay(1000);
    scissor_servo.write(0);
}

void loop() {
  delay(3000);
  int x = random(3) + 1;
  switch (x) {
    case 1: for(int i = 0; i <= 90; i++) {
              paper_servo.write(i);
              delay(5);
            }
            delay(100);
            for(int i = 90; i >= 0; i--) {
              paper_servo.write(i);
              delay(5);
            }
            delay(500);
          break;
    case 2: for(int i = 0; i <= 180; i++) {
              paper_servo.write(i);
              delay(5);
            }
            delay(100);
            for(int i = 180; i >= 0; i--) {
              paper_servo.write(i);
              delay(5);
            }
            delay(500);
          break;
    case 3: for(int i = 0; i <= 180; i++) {
              scissor_servo.write(i);
              delay(5);
            }
            delay(100);
            for(int i = 180; i >= 0; i--) {
              scissor_servo.write(i);
              delay(5);
            }
            delay(500);
          break;
  }
  delay(1000);
}














