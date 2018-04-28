#include <Joystick.h>

int input_switches[] = {2, 3, 4, 5, 6, 7, 8, 9};
int input_switches_count = 8;



void setup() {
  // Set all input pins to INPUT mode
  for(int i = 0; i < input_switches_count; i++) {
    pinMode(input_switches[i], INPUT);
  }

  // Start joystick library
  Joystick.begin(true);
}

void loop() {
  // For every input pin, check if it's on, and if so toggle
  // the corresponding index-based joystick button
  for(int i = 0; i < input_switches_count; i++) {
    int val = digitalRead(input_switches[i]);
    Joystick.setButton(i, val);
  }
}
