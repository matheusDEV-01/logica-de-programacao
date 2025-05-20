// C++ code
//


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 60; contador <= 80; contador += 2){
  Serial.println("Contando em numero par " + String (contador));
    
    delay(200);
  }
  for(int contador = 81; contador <= 101; contador += 2){
  Serial.println("Contando em numero impar " + String (contador));
    
    delay(200);
  }
  
} 









