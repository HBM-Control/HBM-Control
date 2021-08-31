
int ajuste = 119;
int trigger = 6;
int echo = 7;

uint8_t getdistance() {
  pinMode(trigger, OUTPUT);

  pinMode(echo, INPUT);
 
  long duration = 0;
  uint8_t distance = 0;
    uint8_t distance1 = 0;
  
  digitalWrite(trigger, LOW);
  delay(5);
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);
  distance = ajuste - ((duration / 2) * 0.03432);

  if (distance >= 500 || distance <= 0)
  {
    Serial.println("erro de medida");
  }
  
  return distance;
}
