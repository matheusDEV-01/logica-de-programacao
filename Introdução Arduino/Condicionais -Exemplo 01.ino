/*
Controlar dois LEDs com comandos digitados no monitor serial, sem uso de botões.

Enviar "1" para acerder o led1.

Enviar "2" para acerder o led2.

Enviar "0" para apagar ambos.
*/

// C++ code
////Variáveis
int led1 = 6;
int led2 = 5;
int numero = 0;

void setup()
{
  pinMode(led1, OUTPUT);//configura o led vermelho como dispositivo saida
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o numero");//pergunta a idade do usuário
  Serial.println("1 para acender o led");
  Serial.println("2 para acender led");
  Serial.println("0 para apagar ambos");
  while( ! Serial.available()){}//Aguarda o usuário digitar (para o loop)
  numero = Serial.parseInt();
  
  if(numero == 1){
    digitalWrite(led1, HIGH); //verde
  }
  if(numero == 2){ 
    digitalWrite(led2, HIGH);//vermelho
  }
  if(numero == 0){
    digitalWrite(led1, LOW); //verde
    digitalWrite(led2, LOW);//vermelho
  }
}