// C++ code
//


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 5; contador >= 1; contador --){
  Serial.println("Contando do numero " + String (contador));
    
    delay(200);
  }
  
}