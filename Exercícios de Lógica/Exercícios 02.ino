// Declarar variáveis para armazenar o ano de nascimento e o ano atual
//Solicitar ao usuário o ano de nascimento


void setup()
{
  Serial.begin(9600);
}

//variáveis
 int idadedapessoa = 0;
 int converterparasemanas = 0;
 int anoatual = 0;
 int anodenascimento = 0;
 int idadesemana = 0;
 int idade = 52;

void loop()
  //entrada
{
  //cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira Linha
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_02        |"); 
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//última Linha
  
  
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  

 Serial.println("Digite ano de nascimento");//pergunta
  while(! Serial.available());//Espera o usuário digitar
   anodenascimento = Serial.parseInt();//resposta do usuário
  
  Serial.println("Digite ano atual");//pergunta
   while(! Serial.available());//Espera o usuário digitar
    anoatual = Serial.parseInt();//resposta do usuário
  
  //processamento
    idadedapessoa = anoatual - anodenascimento;
    idadesemana = idadedapessoa * 52;
      
    //saída
   Serial.println("Sua idade:" + String(idadedapessoa));
   Serial.println("Sua idade em semana:" + String(idadesemana));
   delay(1000);
}