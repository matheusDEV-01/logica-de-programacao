/*
Elabore um programa para cálculo de preços de produtos que solicite o preço de
compra do produto e o percentual a ser aplicado em cima desse valor para a venda.
Calcule e exiba o preço de venda do produto. Se o percentual a ser aplicado for
inferior a 50%, exiba uma mensagem informando ao usuário que o produto será
vendido com uma margem muito pequena de lucro.
*/

//Variaveis
 float preco = 0;
 float percentual = 0;
 float valordevendas = 0;
   
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o preco");//informa uma mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar (dar enter)
  preco = Serial.parseFloat();
  
  Serial.println("Digite o percentual");//informa uma mensagem ao usuario
  while(! Serial.available());//espera o usuario digitar (dar enter)
  percentual = Serial.parseFloat();
  
  valordevendas = preco + (preco / 100 * percentual);
  
  Serial.println("valor do produto:"  + String (preco));
  Serial.println("percentual eh:"  + String (percentual));
  Serial.println("preco de vendas:"  + String (valordevendas));
  
   if (percentual < 50) {
      Serial.println("O lucro de sua venda sera baixo");
   }
}