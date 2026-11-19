const int ledPin = 8;  // The pin number for the LED

void setup() {
// Initialize the LED pin as an output
pinMode(ledPin, OUTPUT);
}

void loop() {
// Turn LED ON
digitalWrite(ledPin, HIGH);
delay(1000);

// Turn LED OFF
digitalWrite(ledPin, LOW);
delay(1000);
}
