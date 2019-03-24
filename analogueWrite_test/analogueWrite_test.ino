int motorPin = 3;      // motor connected to digital pin 9

void setup() {
  pinMode(motorPin, OUTPUT);  // sets the pin as output
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0; fadeValue <= 200; fadeValue += 5) {
    // sets the value (range from 0 to 200):
    analogWrite(motorPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(70);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 200; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 200):
    analogWrite(motorPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(70);
  }
}
