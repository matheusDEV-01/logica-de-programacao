// C++ code
// varialvel
int tabuadaEscolhida = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite o primeira numero da tabuada: ");
  while(! Serial.available() );
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador = 2;contador <=20 ;contador += 2){
      Serial.println("numero da tabuada:" + String(contador));
  }
  
  
  delay(1200);
  
  
}