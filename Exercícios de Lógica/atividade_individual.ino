//Variáveis
int n1, n2, media, semana1, semana2, frequencia;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  Serial.println ("Digite a primeira nota: ");
  while(! Serial.available() );
  n1 = Serial.parseInt();
  
  Serial.println ("Digite a segunda nota: ");
  while(! Serial.available() );
  n2 = Serial.parseInt();
  
  Serial.println ("Digite a frequencia da primeira semana: "); 
  while(! Serial.available() );
  semana1 = Serial.parseInt();
  
  Serial.println ("Digite a frequencia da segunda semana: "); 
  while(! Serial.available() );
  semana2 = Serial.parseInt();
  
  media = (n1 + n2 ) / 2;
  frequencia = (semana1 + semana2) / 2;
  Serial.println();
  
  if (media == 10 && frequencia == 100){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("Voce foi aprovado!");
    Serial.println("Parabens!! nota e frequencia MAXIMA!!!");
  } else if (media >= 6 && frequencia >= 75){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("foi aprovado!");
  }
  
}