
      // C++ code
      //Variáveis

         float resultado;




         int escolhaDaOperacao;
         int contador = 0;

        float somar (float numero1, float numero2, float numero3 = 5){

          return (numero1 + numero2 + numero3);
        }  
        float Subtrair (float numero1, float numero2, float numero3 = 10){

          return (numero1 - numero2 - numero3);
        }

        float Multiplicar (float numero1, float numero2, float numero3 = 4){

          return (numero1 * numero2 * numero3);
        }
        float Dividir (float numero1, float numero2, float numero3 = 2){

          return (numero1 / numero2 / numero3);
        }




        void setup()
        {
          Serial.begin(9600);

          float numero1 = 0;
          float numero2 = 0;


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


              Serial.println("Agora,digite o 3º numero :");
              while(! Serial.available());
              resultado = Serial.parseFloat();

             switch(escolhaDaOperacao){
              case 1:
              resultado = somar(numero1, numero2, 5);
              Serial.println("WoW!!! o resultado foi:" + String(resultado));


              //1a opcao float resultado = somar();
              //1a opcao Serial.println("WoW!!! o resultado foi:" + String(resultado));

              //2a opcao Serial.println("WoW!!! o resultado foi:" + String(somar()));

              break;

              case 2:
               resultado = Subtrair(numero1, numero2, 10);
              Serial.println("WoW!!! o resultado foi:" + String(resultado));

              break; 

              case 3:
               resultado = Multiplicar(numero1, numero2,4 );
              Serial.println("WoW!!! o resultado foi:" + String(resultado));


              break;

              case 4:
             resultado = Dividir(numero1, numero2,2 );
             Serial.println("WoW!!! o resultado foi:" + String(resultado)); 
             Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
             while(! Serial.available());
              break;

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