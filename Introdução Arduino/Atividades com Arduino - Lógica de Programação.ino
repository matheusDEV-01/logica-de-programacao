// C++ code
////Variáveis
int led1 = 13;
int led2 = 4;
int led3 = 2;
int numero = 0;
int led1Estado = 0;//Etado do led verde 0 = apagado 1 = aceso
int led2Apagar = 9;
int led3Estado = 0;



void setup()
{
  pinMode(led1, OUTPUT);//configura o led vermelho como dispositivo saida
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|--------------------------------------|");
  Serial.println("|        **Digite o numero**           |");//pergunta a idade do usuário
  Serial.println("|1 : para acender/apagar o verde       |");
  Serial.println("|2 : para acender/apagar o amareno     |");
  Serial.println("|3 : para acender/apagar o vermelho    |");
  Serial.println("|0 : para apagar ambos                 |");
  Serial.println("|4 : para acender ambos                |");
  Serial.println("|5 : Sair                              |");
  Serial.println("|--------------------------------------|");
  delay(100);
  Serial.println();
  
  while( ! Serial.available()){}//Aguarda o usuário digitar (para o loop)
  numero = Serial.parseInt();

  switch(numero){
    case 1:
    if (led1Estado == 0 ){//está apagado? acende
    	digitalWrite(led1, HIGH);//verde
      	led1Estado = 1;
    } else {//apaga
    	digitalWrite(led1, LOW);//verde
      led1Estado = 0;
    }
    Serial.println("WoW!!! o resultado foi:" + String(numero)); 
    break;

    case 2:
    if (led2Apagar == 9){//está apagado? acende
    	digitalWrite(led2, HIGH);//verde
      	led2Apagar = 2;
    } else {//apaga
    	digitalWrite(led2, LOW);//verde
      led2Apagar = 9;
    }
    
    Serial.println("WoW!!! o resultado foi:" + String(numero));
    break;

    case 3:
    if (led3Estado == 0 ){//está apagado? acende
    	digitalWrite(led3, HIGH);//verde
      	led3Estado = 3;
    } else {//apaga
    	digitalWrite(led3, LOW);//verde
      led3Estado = 0;
    }
    Serial.println("WoW!!! o resultado foi:" + String(numero));
    break;

    case 0:
    digitalWrite(led1, LOW); //verde
    digitalWrite(led2, LOW);//Amarelo
    digitalWrite(led3, LOW);//vermelho
    Serial.println("WoW!!! o resultado foi:" + String(numero));
    break;
    
    case 4:
    digitalWrite(led1, HIGH); //verde
    digitalWrite(led2, HIGH);//Amarelo
    digitalWrite(led3, HIGH);//vermelho
    Serial.println("WoW!!! o resultado foi:" + String(numero));
    break;
    
    case 5:
    Serial.println("Sair :" + String(numero));
    break;


  }//fim do switch
  
  delay(1000);
}
