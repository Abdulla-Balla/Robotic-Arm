#include <Servo.h>

Servo servo1; // Base rotation
Servo servo2; // Opposite base movement 1
Servo servo3; // Opposite base movement 2
Servo servo4; // Wrist movement
Servo servo5; // Grip movement

int pot1 = A0; // Base rotation potentiometer
int pot2 = A1; // Opposite base movement potentiometer
int pot3 = A2; // Wrist movement potentiometer
int pot4 = A3; // Grip movement potentiometer

int val1, val2, val3, val4;
int pos2, pos3;

void setup() {
  servo1.attach(9);   // Base rotation
  servo2.attach(10);  // Opposite base movement 1
  servo3.attach(11);  // Opposite base movement 2
  servo4.attach(5);   // Wrist movement
  servo5.attach(6);   // Grip movement
}

void loop() {
  val1 = analogRead(pot1);
  val2 = analogRead(pot2);
  val3 = analogRead(pot3);
  val4 = analogRead(pot4);

  int pos1 = map(val1, 0, 1023, 0, 180);   // Base rotation
  pos2 = map(val2, 0, 1023, 0, 90);        // Opposite servo 1
  pos3 = map(val2, 0, 1023, 90, 0);        // Opposite servo 2 (inverse)
  int pos4 = map(val3, 0, 1023, 0, 180);   // Wrist movement
  int pos5 = map(val4, 0, 1023, 30, 90);   // Grip movement

  servo1.write(pos1);
  servo2.write(pos2);
  servo3.write(pos3);
  servo4.write(pos4);
  servo5.write(pos5);

  delay(100);
}
