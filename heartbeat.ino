int ledPin = 9;
int delayTime = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    delayTime = Serial.parseInt();
  }

  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
