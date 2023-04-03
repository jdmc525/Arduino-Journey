
int Rojo = 6;
int Amarillo = 11;
int Verde= 10;

void setup() {
  pinMode(Rojo, OUTPUT);
  pinMode (Amarillo, OUTPUT);
  pinMode (Verde, OUTPUT);
}

void loop() {
  digitalWrite (Rojo, HIGH);
  delay (10000);
  digitalWrite(Rojo, LOW);
  digitalWrite (Verde, HIGH);
  delay(5000);
  digitalWrite(Verde, LOW);
  digitalWrite (Amarillo, HIGH);
  delay(2000);
  digitalWrite(Amarillo, LOW);
}
