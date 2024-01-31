int red=2;
int yellow=4;
int green=8;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
 digitalWrite(red,HIGH);
 delay(1000);
 digitalWrite(yellow,HIGH);
 delay(500);
 digitalWrite(yellow,LOW);
 delay(500);
   digitalWrite(yellow,HIGH);
 delay(500);
 digitalWrite(yellow,LOW);
 delay(500);
   digitalWrite(yellow,HIGH);
 delay(500);
 digitalWrite(yellow,LOW);
 delay(500);
   digitalWrite(green,HIGH);
   digitalWrite(red,LOW);
   digitalWrite(yellow,LOW);
  delay(1000);
  digitalWrite(green,LOW);
   delay(1000);
}
