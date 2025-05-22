// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  
  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  
  String frutas[6];
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
  Serial.println("Informe a "+ String(i + 1)+ "a Fruta:");
  while (! Serial.available());
  String fruta = Serial.readString();
  
  frutas[i] = fruta;
  }
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + "a fruta" + frutas[i]);
  }
}

void loop()
{
  
}

