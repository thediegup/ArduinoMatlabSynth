//PRACTICA 01- CODIGO PARA BUZZER
//11-04-2023

int buzzer = 10 ; //setting controls the digital IO foot buzzer.

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int valor = analogRead(A1);
  int frec = map(valor,0,1024,100,5000); //¿Que significa esta función?
  int durac = 250;
  tone(buzzer,frec,durac);
  delay(100);
  // put your main code here, to run repeatedly:

}
