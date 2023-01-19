#include <Wire.h> 

#define ADXL345_ADDRESS (0x53) 

void setup() {
  Wire.begin();
  // Inicializar o acelerômetro
  Wire.beginTransmission(ADXL345_ADDRESS);
  Wire.write(0x2D); 
  Wire.write(0x08); 
  Wire.endTransmission();
}

void loop() {
  int x, y, z;
  // Lê os valores de aceleração dos três eixos
  Wire.beginTransmission(ADXL345_ADDRESS);
  Wire.write(0x32); 
  Wire.endTransmission();
  Wire.requestFrom(ADXL345_ADDRESS, 6);
  x = Wire.read(); 
  x |= Wire.read() << 8; 
  y = Wire.read(); 
  y |= Wire.read() << 8; 
  z = Wire.read(); 
  z |= Wire.read() << 8; 
  // Imprime os valores de aceleração
  Serial.print("X = ");
  Serial.print(x);
  Serial.print(", Y = ");
  Serial.print(y);
  Serial.print(", Z = ");
  Serial.println(z);
  delay(1000);
}
