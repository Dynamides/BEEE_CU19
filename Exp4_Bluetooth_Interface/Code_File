void setup() 
{
  Serial.begin(9600);
  pinMode(9,OUTPUT); 

}

void loop() 
{
  if(Serial.available())
  {
      int data = Serial.read();
      if(data=='1')
      {
          digitalWrite(9,HIGH);
      }
      if(data=='2')
      {
          digitalWrite(9,LOW);
      }
          
      delay(50);  
  }
