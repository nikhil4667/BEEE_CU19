void setup()
{
  int i;
  for(i=1;i<=4;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  int i;
  for(i=1;i<=4;i++)
  {
   if(i!=4)
    {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    }
    else{
    digitalWrite(i,HIGH);
    digitalWrite(i-3,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    }
  }
}