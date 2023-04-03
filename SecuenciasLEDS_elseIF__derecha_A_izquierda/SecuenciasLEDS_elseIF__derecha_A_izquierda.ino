int derecha = 11;
int izquierda = 12;
int parar = 10;
int rojo1 = 8;
int rojo2 = 7;
int verde1 = 6;
int verde2 = 5;
int amarillo1 = 4;
int amarillo2 = 3;
int tiempo= 500;
int contador = 0;

void setup() {
  pinMode(derecha, INPUT);
  pinMode(izquierda, INPUT);
  pinMode(parar, INPUT);
  pinMode(rojo1, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(amarillo1, OUTPUT);
  pinMode(amarillo2, OUTPUT);
}

void loop() {

  if (digitalRead(derecha) ){
    for (contador = 8; contador >= 3 ; contador-= 1){
          digitalWrite(contador, HIGH);
          delay(tiempo);
          digitalWrite(contador, LOW);
         if(digitalRead(izquierda)){
              contador = 2;
    }
    }else if (digitalRead(izquierda)){
         for (contador = 3; contador <= 8 ; contador+= 1){
          digitalWrite(contador, HIGH);
          delay(tiempo);
          digitalWrite(contador, LOW);
          if(digitalRead(derecha)){
              contador = 9;
         }
      
    }
}
}
