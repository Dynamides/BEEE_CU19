//code for LED Chaser//

void setup()
{
  pinmode(6,OUTPUT);
  pinmode(7,OUTPUT);
  pinmode(8,OUTPUT);
  pinmode(9,OUTPUT);
}

void loop()
{
  int i;
  for(i=6;i<=9;i+=)
  (
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(100);
  )
)
