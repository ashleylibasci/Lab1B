SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  pinMode(D5, OUTPUT);
}

void loop()
{
  delay(10);
  digitalWrite(D5, HIGH);
  delay(10);
  digitalWrite(D5, LOW);
}
