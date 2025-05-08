

// C++ code
//Variáveis
 float numero1 = 0;
 float numero2 = 0;
 float soma;
 float Subtrair;
 float Multiplicar;
 float Dividir;
 int escolhaDaOperacao;
 int contador = 0;

void setup()
{
  Serial.begin(9600);
  
  do{
  Serial.println("|-----------------------------------------------|");
  Serial.println("|Bem-vindo a calculadora mega inteligente :     |");
  Serial.println("|Escolha uma das operacoes :                    |");
  Serial.println("|1 - Soma :                                     |");
  Serial.println("|2 - Subtrair :                                 |");
  Serial.println("|3 - Multiplicar :                              |");
  Serial.println("|4 - Dividir :                                  |");
  Serial.println("|-----------------------------------------------|");
  
  while(! Serial.available());//Espera o usuário digitar
  
  escolhaDaOperacao = Serial.parseInt();//resposta do usuário
  
  Serial.println("Agora, para realizar a operacao, digite o 1º numero :");
  while(! Serial.available());
  numero1 = Serial.parseFloat();
  
  Serial.println("Agora,digite o 2º numero :");
  while(! Serial.available());
  numero2 = Serial.parseFloat();
  
  if (escolhaDaOperacao == 1 ){
    soma = numero1 + numero2;
    Serial.println("WoW!!! o resultado foi:" + String(soma));
    
    }else if(escolhaDaOperacao == 2 ){
    Subtrair= numero1 - numero2;
    Serial.println("WoW!!! o resultado foi:" + String(Subtrair));
    
    }else if(escolhaDaOperacao == 3 ){
    Multiplicar= numero1 * numero2;
    Serial.println("WoW!!! o resultado foi:" + String(Multiplicar));  
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    
  }else if(escolhaDaOperacao == 4 ){
   Dividir = numero1 / numero2;
    Serial.println("WoW!!! o resultado foi:" + String(Dividir));  
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(! Serial.available());
  }
    
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(! Serial.available());
   
    if(Serial.readString() ==  "s" ){
    contador++;
    } 
    else{
    contador = 0;
    
    Serial.println("Ate breve, obrigado por usar a calculadora inteligente");
    Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  while(contador != 0);
}

void loop()
{
  
}