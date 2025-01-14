/*
LED_BUILTIN defaults to port 13 on the Arduino UNO.

In the Arduino IDE, click the check mark to Verify your code.
If there are no errors, click on the arrow to Upload your code to your Arduino.

The 'setup' code sets up the Arduino UNO. The 'loop' code specifies what you want the Arduino to do.
*/

void setup () {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turns on the LED by setting voltage to HIGH
  // digitalWrite(pin, value)
  digitalWrite(LED_BUILTIN, HIGH);
  // Sets a delay of the next action. 1000 is 1 second.
  // delay(number in ms)
  delay(1000);
  // Turns off the LED by setting voltage to LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}