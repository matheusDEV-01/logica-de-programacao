

void setup()
{
  Serial.begin(9600);
  
  int numeross[5] = {10, 20, 30, 40, 50};
  
  numeross[3] = 400;
  Serial.println(numeross[3]);
  
  Serial.println(numeross[0]);
  Serial.println(numeross[1]);
  Serial.println(numeross[2]);
  Serial.println(numeross[3]);
  Serial.println(numeross[4]);
  Serial.println(numeross[5]);
  
  for(int i = 0; i <= 4; i++){
    Serial.println(numeross[i]);
  }
  
}

void loop()
{
  //sem instrucoes
}