/*
Parts needed:
x1 Arduino
x1 Breadboard
x2 Resistors - I used 330 ohm
x3 LEDs
x8 Wires - colors of your choice
*/

/*
Instructions:
coming soon
*/


void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);
}
