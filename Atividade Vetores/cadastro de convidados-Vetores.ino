// C++ code
//Variaveis globais

//criar um vetor tamanho 4 fazendo parte do mesmo castro

String convidados[4];
int idadeConvidados[4]; //Camel case
String emailConvidados[4];

//Funções
void desenhaCabecalho(){
          Serial.println("|-----------------------------------------------|");
          Serial.println("|                  Bem-vindo                    |");
          Serial.println("|               Churrascao do ZEH               |");
          Serial.println("|-----------------------------------------------|");
          Serial.println();
          Serial.println();
}


void setup()
{
  Serial.begin(9600);//inicia a comunicação serial
}

void loop()
{
 //fazer um cabeçalho  
  desenhaCabecalho();//chama a função para desenhar o cabeçalho
  
 //cadastrar os dados
  for(int i = 0; i < 4; i++){
    
    //solicitar o nome do usuário
    Serial.println("Informe " +String(i + 1)+"o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
    //solicitar a idade
    Serial.println("Informe"+String(i + 1)+"a idade do " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    
    //solicitar o email
    Serial.println("Informe"+String(i + 1)+"o email para cadastro " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
    Serial.println();
    
  }//fim do for
  
  //Exibir a lista de convidados
  //obs: só vai na festa quem for maior de idade >= 18
  Serial.println("**Exibindo apenas convidados eleitos para a festa**");
  Serial.println();
  Serial.println();
  
  for(int i = 0; i < 4; i++)
  {//apenas maiores de 18
    //if (idadeConvidados[i] >= 18){
    Serial.println("Nome:" + convidados[i]);
    Serial.println("Idade:" + String(idadeConvidados[i]));
    Serial.println("Email:" + emailConvidados[i]);
    Serial.println("Permissao para a festa:" + String(idadeConvidados[i] >= 18 ? "OK" : "Menos de Idade"));
    Serial.println();
    Serial.println();
    //}//Fim if
    
  }//Fim for
  
 delay(2000);
}//Fim do loop