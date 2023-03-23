void setup() {
  // put your setup code here, to run once:
  pinMode(32, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(14, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  //SCATTA VERDE
  digitalWrite(26, LOW);
  digitalWrite(14, HIGH);
  delay(10000);

  //SCATTA GIALLO
  digitalWrite(14,LOW);
  digitalWrite(32,HIGH);
  delay(5000);

  //SCATTA ROSSO
  digitalWrite(32, LOW);
  digitalWrite(26, HIGH);
  delay(7000);

}
