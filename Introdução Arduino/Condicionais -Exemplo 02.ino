/*

Faça um programa que pergunte ao usuário sua idade e se ele tem ingresso.

Após validação, exiba a mensagem se ele pode entrar na festa ou não.

OBS: Condição para entrar na festa é ter o ingresso e ser maior de idade

---
Logo em seguida altere o programa para acender um led caso o usuário possa entrar na festa,
caso contrário acenda um led vermelho

*/



// C++ code
//Variáveis
int ledvermelho = 5;
int ledverde = 6;
int idade = 0;

String ingresso = "sim";
                     //true && true

/*
Área de configuração do arduino
roda apenas uma vez antes do loop
*/
void setup()
{
  pinMode(ledvermelho, OUTPUT);//configura o led vermelho como dispositivo saida
  pinMode(ledverde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Perguntar a idade
  Serial.println("Digite a sua idade");//pergunta a idade do usuário
  while( ! Serial.available()){}//Aguarda o usuário digitar (para o loop)
  idade = Serial.parseInt();
  
  //Perguntar se tem o ingresso
  Serial.println("Ganho o ingresso ? sim/não");//pergunta a idade do usuário
  while( ! Serial.available()){}//Aguarda o usuário digitar (para o loop)
  ingresso = Serial.readString();
  
 Serial.println("Idade : " + String (idade));
  Serial.println("Esta com ingresso na mao : " + ingresso );
  if (idade >= 18 && ingresso == "sim"){
    digitalWrite(ledverde, HIGH);//acende o verde
    digitalWrite(ledvermelho, LOW);//acende o vermelho
    //bloquinho do sim (true)
    Serial.println("Entra na festa");
    Serial.println("Espero que voce curta a festa");
    Serial.println("Serah nesta sexta!!");
  }else{
    digitalWrite(ledverde, LOW);
    digitalWrite(ledvermelho, HIGH);
    //bloquinho do não (false)
    Serial.println("Não pode entrar na festa");
    Serial.println("Que pena, nao foi desta vez!");
  }
  delay(500);
  //Reset dos led
   digitalWrite(ledverde, LOW);//acende o verde
   digitalWrite(ledvermelho, LOW);//acende o vermelho
 
  delay(10000);
}