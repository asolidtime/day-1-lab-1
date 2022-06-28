

SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(AUTOMATIC);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D7, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  
  delay(1s);
  digitalWrite(D7, HIGH);
  delay(1s);
  digitalWrite(D7, LOW);
}