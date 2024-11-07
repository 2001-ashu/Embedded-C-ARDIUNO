const int ledPin = 13;
volatile int counter = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  noInterrupts();
  TCCR0A = 0;               // Clear Timer/Counter Control Register A
  TCCR0B = 0;               // Clear Timer/Counter Control Register B
  TCNT0 = 0;                // Initialize counter value to 0

  TCCR0A |= (1 << WGM01);

  OCR0A = 15;             // This gives approximately 1 ms delay with a 1024 prescaler
  TCCR0B |= (1 << CS02) | (1 << CS00);
  TIMSK0 |= (1 << OCIE0A);
  interrupts();
}

ISR(TIMER0_COMPA_vect) {

  if (counter++ >= 500) {
    digitalWrite(ledPin, !digitalRead(ledPin));
    counter = 0;
  }
}

void loop() {

}
