
int display7c [10] ={0x3f, 0x06, 0x5b, 0x4f, 0x66,0x6d,0x7d,0x07,0x7f,0x67}; 
int punto = 5;
int a = 6;
int b = 7;
int c= 8;
int d=9;
int e= 10;
int f= 11;
int g= 12;
int incremento = 2; //pulsadores para que incremente los numeros del 0 al 9 (Resistencia real o pulldown en paralelo con el pulsador)
int decremento = 3; //pulsador para que decremente de 9 a 0 (Resistencia PULLUP integrada con el Arduino)
int contador = 0;
int i= 0;

//Función que coloca en el puerto de salida los bits comenzando
// desde el pin ini hasta el pin fin

void puerto(int bits,int ini,int fin){
  for(int i=ini;i<=fin;i++)
  {
    digitalWrite(i,bitRead(bits,i-ini));
  }
}


void setup() {

  for (i=punto; i<=g ; i++ ){
      pinMode(i, OUTPUT );
   }
    pinMode(incremento, INPUT);
    pinMode(decremento, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(incremento)){
    delay(100);
    while(digitalRead(incremento));
    delay(100);
    contador++;
    
    }

  if (!digitalRead(decremento)){
    delay(100);
    while(!digitalRead(decremento));
    delay(100);
    contador--;
    }

  if(contador<0){
      contador=9;
    }  

  if(contador>9){
      contador =0;
    }  

  puerto(display7c[contador], a,g);

}
