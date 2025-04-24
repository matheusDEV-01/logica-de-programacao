//Faça um programa que receba a idade de uma pessoa em anos
//imprima essa idade em:Meses, Dias, Horas, Minutos.

//Variáveis
int idade = 0;//inicia a idade
long idademeses = 0;
long idadedias = 0;
long idadehoras = 0;
long idademinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira Linha
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_01        |"); 
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//última Linha
  
  
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuário
  while( ! Serial.available()){}//Aguarda o usuário digitar (para o loop)
  idade = Serial.parseInt();
  
  
  //processamento
  idademeses = idade * 12;
  idadedias = idade * 365;
  idadehoras = idadedias * 24;
  idademinutos = idadehoras * 60;
  //saída
  Serial.println("Sua idade em meses:" + String(idademeses));
  Serial.println("Sua idade em dias:" + String(idadedias));
  Serial.println("Sua idade em horas:" + String(idadehoras));
  Serial.println("Sua idade em minutos:" + String(idademinutos));
}