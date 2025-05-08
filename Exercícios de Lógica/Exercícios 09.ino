
//Escreva um programa que receba o salário de um funcionário e imprima o valor do salário reajustado
//uma mensagem caso ofuncionário não tenha direito a aumento

//Variaveis
 float salario = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu salario");//informa uma mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar (dar enter)
  salario = Serial.parseFloat();
  
  //processamento
  if(salario < 500){//true
   salario = salario  * 1.3;
    Serial.println("Salario reajustado para:"  + String (salario)); 
   }else {
    Serial.println("uma mensagem caso ofuncionario nao tenha direito a aumento");
      }   
  delay(1000);
}