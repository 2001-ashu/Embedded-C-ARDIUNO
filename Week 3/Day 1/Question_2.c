#define LED  6
#define LED1 5
int button1=11;
int button2=12;
int buttonstate =0;
int buttonstate1=0;
void setup()
{
    pinMode(LED,OUTPUT);
    pinMode(LED1,OUTPUT);
    pinMode(button1,INPUT);
    pinMode(button2,INPUT);
}
void loop()
{
    buttonstate=degitalRead(button1);
    buttonstate1=digitalRead(button2);
    if(buttonstate==1)
    {
        digitalWrite(LED,HIGH);
        delay(1000);
        digitalWrite(LED,LOW);
    }
    else if(buttonstate1==1)
    {
        digitalWrite(LED1,HIGH);
        delay(1000);
        digitalWrite(LED1,LOW);
    }
}