// C++ code
//

int ledInterno = 13;
int led2 = 4;

void setup()
{
  pinMode(ledInterno, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(ledInterno, HIGH);
   delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(ledInterno, LOW);
  delay(1000);// Wait for 1000 millisecond(s)
  
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
}