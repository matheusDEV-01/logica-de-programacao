int n1, n2, n3, n4, media;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite a primeira nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n1 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a segunda nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n2 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a terceira nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n3 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a quarta nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n4 = Serial.parseInt();//resposta do usario
  
 //processamento 
 media = (n1 + n2 + n3 + n4)/4 ;
   Serial.println ("Media: " + String(media));
  
  if (media >= 7) {
    Serial.println("aprovado");
  } else if(media >= 5 && media < 7){
    Serial.println("recuperacao");
  }else {
    Serial.println("reprovado");
  }
  
  }