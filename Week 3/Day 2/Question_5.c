int pot=A0;
int x=0;

void setup() {
  Serial.begin(9600);
      pinMode(A0, INPUT);
      pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(A0);
  int b=x/4;
    Serial.println(x);

  digitalWrite(13,b);
  delay(1000);

}
