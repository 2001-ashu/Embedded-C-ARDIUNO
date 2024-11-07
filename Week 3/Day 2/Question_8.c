#define LED 13
const int buttonPin = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  digitalWrite(LED, digitalRead(buttonPin));
}
