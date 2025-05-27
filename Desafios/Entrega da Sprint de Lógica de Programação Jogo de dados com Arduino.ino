// C++ code
//Variaveis globais
int led1 = 7;
int led2 = 4;
int ledAzul1 = 5;
int ledAzul2 = 3;
int ledAzul3 = 2;
int acertos = 0;

#include <Servo.h>
Servo meuServo; //Criar um objeto servo
Servo motor;


//Funções
void desenhaPontinho(int qtpPontos = 5){
  for (int i = 1; i <= qtpPontos; i++){
    Serial.print(".");
    delay(500); 
  }

}

void desenhaCabecalho(){
  Serial.println("|-----------------------------------------------|");
  Serial.println("|            ** Programa jogo **                |");
  Serial.println("|                  de dado                      |");
  Serial.println("|-----------------------------------------------|");
  Serial.println(); 
  delay(500);  
}

void setup()
{
  Serial.begin(9600);//inicia a comunicação serial
  randomSeed(analogRead(0));//inicia e normaliza a porta rendomica para evitar pega o mesmo valor
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  motor.attach(13);//configura o motor na porta 2
  motor.write(0);//configura a posição inicial em 0 graus
}

void loop()
{


  //fazer um cabeçalho  
  desenhaCabecalho();//chama a função para desenhar o cabeçalho

  //solicitar o palpite do usuário - 3 comandos
  Serial.println("Digite um palpite entre 1 e 6: ");
  while(!Serial.available());
  int palpite = Serial.parseInt();

  //jogar o dado - sorteio um número randomico/aleatório de 1 até 7 - 1, ou seja, 6
  int numeroSorteado = random(1, 7);//número entre 1 e 6

  Serial.println("Jogando o dado" );

  desenhaPontinho();

  Serial.println();

  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero Sorteado: " + String(numeroSorteado));
  palpite = numeroSorteado;

  if(palpite == numeroSorteado){
    digitalWrite(led1, HIGH);
    delay(500);
    acertos += 1;
    digitalWrite(led1, LOW);
    Serial.println("Parabens, voce acertou!!" );
  }else {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    Serial.println("Que pena, tente outra vez !! " );
  }
  switch(acertos){
    case 1:
    digitalWrite(ledAzul1, HIGH);

    Serial.println("WoW!!! o resultado foi:" + String(acertos)); 
    break;

    case 2:
    digitalWrite(ledAzul2, HIGH);

    Serial.println("WoW!!! o resultado foi:" + String(acertos)); 
    break; 

    case 3:
    digitalWrite(ledAzul3, HIGH);
    Serial.println("WoW!!! o resultado foi:" + String(acertos));
    motor.write(0);//Move para 0 graus
    delay(1500);
    motor.write(180);
    delay(1500);
    digitalWrite(ledAzul1, LOW);
    digitalWrite(ledAzul2, LOW); 
    digitalWrite(ledAzul3, LOW); 
    Serial.println();
    Serial.println("Reiniciando o programa .... "); 
    break; 
  }

  delay(700); 
}