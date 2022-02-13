// This is a parallel circuit, which means that all of the components here are connected electrically in one way or another. There is more than one way for electricity to get to the components.

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
First, connect one of your wires from the GND pin of your Arduino to the breadboard.
Then, connect a wire from a pin of your choice on the Arduino to anywhere on the breadboard.
Now place an LED anywhere you want on the breaboard.
Connect a wire from the anode of that LED to the wire connected to a pin on the Arduino.
Place a resistor down with one of its terminals next to the LED. Connect it (with a wire) to the slot next to the wire connected to the GND pin of the Arduino.
Repeat the previous 3 steps for the other two LEDs.
Finally, copy - paste the code below into your Arduino IDE. Tailor it to your needs. When you run the code, the LEDs should turn on and start blinking.

Note: You can set up your circuit in any way you want, this is just to direct you in a general idea of how to assemble it.
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
