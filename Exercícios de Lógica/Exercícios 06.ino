//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//Variáveis
float numeroPolegada = 0;
float numeroCm = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  
    //cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira Linha
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_06        |"); 
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//última Linha
  
  
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  Serial.println("numeroPolegada:");
  while (!Serial.available()) {}
  numeroPolegada = Serial.parseFloat();
  
   //processamento
 numeroCm = numeroPolegada / 2.54;
  
  //
  Serial.println("receba a medida em polegadas e exiba esse número em centímetros:" + String(numeroCm));
  delay(1000);
}