void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int frec = 220;
  tone(9,frec); //genera la onda cuadrada
  //delay(1000);
  //noTone(9);
  //delay(1000);
  //      %Otro Método%
  //vel = ((1/frec)*1000)/2;       %Esta parte puede llevarse bastante poder de procesamiento   
  //digitalWrite(9, HIGH);
  //delayMicroseconds(vel);
  //digitalWrite(9, LOW);
  //delayMicroseconds(vel);
  //% Este método lleva mucho mas poder de procesamiento y no es viable %
}
