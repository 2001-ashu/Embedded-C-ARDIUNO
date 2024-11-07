const int ledPin = 13;  
volatile bool ledState = false;  
volatile int interruptCount = 0; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  noInterrupts();          
  TCCR0A = 0;               
  TCCR0B = 0;               
  TCNT0 = 0;               
  OCR0A = 156;      //10 ms value       
  TCCR0A |= (1 << WGM01);
  TCCR0B |= (1 << CS02) | (1 << CS00);
  TIMSK0 |= (1 << OCIE0A);
  interrupts();            
}

ISR(TIMER0_COMPA_vect) {   
  if (interruptCount++ >= 100) { 
    ledState = !ledState;   
    digitalWrite(ledPin, ledState); 
    interruptCount = 0;      
  }
}

void loop() {

}
