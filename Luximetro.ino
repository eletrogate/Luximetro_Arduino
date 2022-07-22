#include <Wire.h>
#include <BH1750.h>

BH1750 luximetro; // Criando um objeto sensor para chamar as funções da biblioteca


void setup(){
  Serial.begin(9600);
  Wire.begin();
  luximetro.begin();
  Serial.println(F("O tesde do BH1750 começou"));
}


void loop() {
  float lux = luximetro.readLightLevel();
  Serial.print("Iluminancia: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(1000);
}