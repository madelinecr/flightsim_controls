#include <Joystick.h>

int gameButton1 = 2;
int pin1 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, INPUT);
  Serial.begin(9600);
  Joystick.begin(true);
}

void loop() {
  // put your main code here, to run repeatedly:

  int val = digitalRead(pin1);

  Joystick.setButton(gameButton1, val);
  Serial.print(val);
  delay(500);
}
