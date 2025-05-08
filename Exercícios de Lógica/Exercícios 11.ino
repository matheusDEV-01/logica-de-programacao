//Faça um programa que receba um número inteiro do usuário e informe se este
//número é positivo ou negativo.
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
  
   if(numero >= 0){
     Serial.println("numero e positivo:"  + String (numero));
  }else {
     Serial.println("numero e negativo"); 
   }
  
}