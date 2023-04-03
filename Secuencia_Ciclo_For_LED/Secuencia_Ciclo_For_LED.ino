
int rojo1 = 8;
int rojo2=7;
int verde1=6;
int verde2=5;
int amarillo1= 4;
int amarillo2 = 3;
int i= 8;
int j=3;
int tiempo= 1000;

void setup() {
pinMode (rojo1, OUTPUT);
pinMode (rojo2, OUTPUT);
pinMode(amarillo1, OUTPUT);
pinMode(amarillo2, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(verde2, OUTPUT);

}


//LED se prenden de dos en dos en secuencia de izquierda a derecha (de rojo a amarillo)
void loop() {
  for (i=8 ; i>=3 ; i-=2){
  digitalWrite(i,HIGH);
  digitalWrite(i-1, HIGH);
  delay(1000);
  digitalWrite(i, LOW);
  digitalWrite(i-1, LOW);
  delay(1000);
    }




}
