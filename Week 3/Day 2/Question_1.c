#define LED 13
int button=2;
int buttonstate=LOW;
void setup()
{
    pinMode(LED,OUTPUT);
    pinMode(button,INPUT);
}
void loop()
{
    int buttonstate=digitalread(button);
    if(buttonstate==1)
    {
        digitalWrite(LED,HIGH);
    }
    else if(buttonstate==0)
    {
        digitalWrite(LED,LOW);
    }
}