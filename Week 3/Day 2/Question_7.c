#define RED 13
#define YELLOW 12
#define GREEN 8

int rbtn = 2;
int ybtn = 4;
int gbtn = 7;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  pinMode(rbtn, INPUT);
  pinMode(ybtn, INPUT);
  pinMode(gbtn, INPUT);
}

void loop() {
  digitalWrite(RED, digitalRead(rbtn));
  digitalWrite(YELLOW, digitalRead(ybtn));
  digitalWrite(GREEN, digitalRead(gbtn));


  delay(1000);
}
