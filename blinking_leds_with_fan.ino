/*
Parts needed:
x1 Arduino
x1 Breadboard
x1 Fan Blade
x1 3-6V Motor
x1 RGB LED
x1 White LED (or any other of your choice as long as it isn't RGB)
x2 Resistors (In my circuit I used 330 ohm resistance)
x6 Wires - colors of your choice
*/

/*
Instructions:
First, connect your Arduino to your computer.
Then, connect your RGB LED to the breadboard.
Next, connect your other LED to the breadboard.
Now, add one of your resistors next to the cathode of your RGB LED.
Add another next to the cathode of your other LED. Make sure that your resistors are situated in such a way that they are connected electrically to their respective LEDs.
Now, go back to your RGB LED. Connect a wire to the unused side of the resistor connected to the LED. Attach the other end of that wire to the GND pin of your Arduino.
Go to your other LED and do the same with the resistor for that one as was explained in the previous step, except attach the unused end (the end that must be connected to the GND pin) of the wire to the spot next to the wire next to the resistor from the previous step.
Now that you have both of your LEDs connected to the GND pin of the Arduino, we can start connecting the LEDs to output pins on the Arduino.
Find the red end of your RGB LED and connect it to a pin of your choice on the Arduino. Repeat for the green and blue ends of the RGB LED and do the same for the anode of the regular LED.
Great, now we can start hooking up the motor and fanblade. If you have not done so already, attach the fanblade to your motor.
Take the red wire of your motor and connect it to a pin of your choosing on the Arduino.
Now take the black wire of your motor and attach it next to the wires on the breadboard that are connected to the GND pin on the Arduino.
Finally, copy - paste the code below into your Arduino IDE. Tailor it to your needs. Run the program, and the LEDs should turn on. The RGB LED will start blinking, and the other LED won't blink but it will still be on. You may need to give the fanblade a little push for the motor to start running properly.

Note: You can set up your circuit in any way you want, this is just to direct you in a general idea of how to assemble it. 
*/


void setup() {
  pinMode(13, OUTPUT); // Red pin of the RGB LED
  pinMode(12, OUTPUT); // Green pin of the RGB LED
  pinMode(8, OUTPUT); // Blue pin of the RGB LED
  pinMode(7, OUTPUT); // Connected to the resistor for the regular LED. Resistor is connected to the anode of that LED
  pinMode(2, OUTPUT); // Red wire of the motor
}

void loop() {
  digitalWrite(2, HIGH); // Sends a signal to the motor

  digitalWrite(7, HIGH); // Sends a signal to the regular LED
  digitalWrite(8, HIGH); // Sends a high electrical signal to the blue pin of the RGB LED
  delay(50); // Delays for .05 seconds
  digitalWrite(8, LOW); // Sends a low electrical signal to the blue pin of the RGB LED
  delay(50); // Delays for .05 seconds
  // You should be able to get the gist of it for the next 8 lines.
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);
}
