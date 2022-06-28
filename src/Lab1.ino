
int i = 0;

SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(AUTOMATIC);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D7, OUTPUT);
  pinMode(A5, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  int value = map(analogRead(A5), 0, 4095, 5, 20);
  value = value * value;
  delay(value);
  digitalWrite(D7, HIGH);
  delay(value);
  digitalWrite(D7, LOW);
}