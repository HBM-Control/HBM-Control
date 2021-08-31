

uint8_t getbaterylevel() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.00) * 2;
  int bateria = map(voltage,0,9,0,100);
 Serial.print(bateria);
 return bateria;

}
