
int trigger = 6;
int echo = 7;
int reed = 2;

 

uint8_t getdistance() {
  pinMode(trigger, OUTPUT);

  pinMode(echo, INPUT);
  pinMode(reed, INPUT);
  long duration = 0;
  uint8_t distance = 0;
  digitalWrite(trigger, LOW);
  delay(5);
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) * 0.03432;
  if (distance >= 500 || distance <= 0)
  {
    Serial.println("erro de medida");
  }
  else
  {
    Serial.print(distance);
    Serial.println(" cm");
  }
  return distance;
}
