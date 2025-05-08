//Faça um programa que receba um número do usuário e informe se este número é
//par ou ímpar.

//Variaveis
 int numero;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero");//pergunta a idade do usuário
  while( ! Serial.available()){}//Aguarda o usuário digitar (para o loop)
  numero = Serial.parseInt();
  
  if(numero % 2 == 0){
    Serial.println("numero digitado eh par:"  + String (numero));
  }else {
     Serial.println("numero digitado eh impar"); 
}
  

  
}