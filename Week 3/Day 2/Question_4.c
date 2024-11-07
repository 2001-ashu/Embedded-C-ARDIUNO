#define LED_PIN 13
#define BUTTON_PIN 2
 
 
int toggleState = 0;
 
void checkISR() 
{
  if (digitalRead(BUTTON_PIN) == LOW) 
  {
    delay(200);
    toggleState = !toggleState;
    digitalWrite(LED_PIN,toggleState);
  }
}
 
void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN),checkISR, FALLING);
}
 
void loop() 
{
  
}