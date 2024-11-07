int Pin1 = 2;
int Pin2 = 3;
int ledPin1 = 8;
int ledPin2 = 9;

void setup()
{
    pinMode(Pin1, INPUT);
    pinMode(Pin2, INPUT);

    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
}

void loop()
{
    int statePin1 = digitalRead(Pin1);
    int statePin2 = digitalRead(Pin2);

    if (statePin1 == HIGH)
    {
        digitalWrite(ledPin1, HIGH);
    }
    else
    {
        digitalWrite(ledPin1, LOW);
    }

    if (statePin2 == HIGH)
    {
        digitalWrite(ledPin2, HIGH);
    }
    else
    {
        digitalWrite(ledPin2, LOW);
    }

    delay(100);
}
