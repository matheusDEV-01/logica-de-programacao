// C++ code
//Variaveis globais

//Funções
void desenhaPontinho(int qtpPontos = 5){
  for (int i = 1; i <= qtpPontos; i++){
  Serial.print(".");
   delay(700); 
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

  if(palpite == numeroSorteado){
    Serial.println("Parabens, voce acertou!!" );
  }else{
    Serial.println("Que pena, tente outra vez !! " );
  }

  Serial.println("Reiniciando o programa .... ");
  Serial.println();
  delay(700); 
}