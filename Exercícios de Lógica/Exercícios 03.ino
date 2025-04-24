//Função para calcular o dobro de um número
//Solicitar ao usuário que digite um número
void setup()
{
  Serial.begin(9600);
}
//Variáveis-criação e inicialização
int Dobro = 0;
int numero = 0;

void loop()
{
  
    //cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira Linha
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_03        |"); 
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//última Linha
  
  
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  //entrada
   Serial.println("Digite o numero qualquer:");//pergunta
   while(! Serial.available());//Espera o usuário digitar/dar um <Enter>
   numero = Serial.parseInt();//resposta do usuário
  
  
   //processamento
  Dobro = numero * 2;
  
  //saída
  Serial.println("Dobro do numero:" + String(Dobro));
}