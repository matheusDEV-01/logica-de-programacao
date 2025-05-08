/*
Programa que recebe nome, cargo e salário de um funcionário.
Se o salário for menor que 1000, aumenta em 10%.
Exibe nome, cargo e salário final.
*/

//Variaveis
String nome = "";
String cargo = "";
float salario = 0;

//funcao que roda apenas uma unica vez
//serve para configuracoes dos sensores, bibliotecas, etc

void setup()
{  
  Serial.begin(9600);
}

void loop()
{   
  //entrada
  
  Serial.println("Digite seu nome");//informa uma mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar (dar enter)
  nome = Serial.readString();//captura o dado digitado pelo usuario
 
  Serial.println("Digite seu cargo");//informa uma mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar (dar enter)
  cargo = Serial.readString();       
    
  Serial.println("Digite seu salario");//informa uma mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar (dar enter)
  salario = Serial.parseFloat();
  
  //processamento 
        
   //saida
   //exibir nome, cargo e salario
   Serial.println();//imprime uma linha
   Serial.println();//imprime uma linha
    
   Serial.println("Nome do funcionario" + nome);     
   Serial.println("Cargo do funcionario" + cargo);
   
   if(salario < 1000){//true
   //calcular salario
   salario = salario + (salario * 0.10);
   Serial.println("Novo salario: R$" + String(salario));
   }else {
    Serial.println("Salario: R$" +String(salario));
   }   
          
    Serial.println();
    Serial.println();
}