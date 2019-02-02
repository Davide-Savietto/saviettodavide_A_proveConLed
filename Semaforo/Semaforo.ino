int ledRosso1 = 13;
int ledGiallo1 = 12;
int ledVerde1 = 11;
int ledVerde2 = 4;
int ledGiallo2 = 3;
int ledRosso2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRosso1, OUTPUT);
  pinMode(ledGiallo1, OUTPUT);
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledGiallo2, OUTPUT);
  pinMode(ledRosso2, OUTPUT);
  Serial.begin(9600);
}
void Fase3()
{
  digitalWrite(ledRosso1, LOW);
  digitalWrite(ledGiallo1, LOW);
  digitalWrite(ledGiallo2, LOW);
  digitalWrite(ledRosso2, HIGH);
  digitalWrite(ledVerde1, HIGH);
  delay(2500);
  Lampeggio1();
}
void Fase2()
{
  digitalWrite(ledGiallo1, HIGH);
  digitalWrite(ledGiallo2, HIGH);
  delay(750);
}
void Fase1()
{
  digitalWrite(ledRosso1, HIGH);
  digitalWrite(ledVerde2, HIGH);
  delay(2500);
  Lampeggio2();
}
void Fase4()
{
  digitalWrite(ledGiallo2, HIGH);
  digitalWrite(ledGiallo1, HIGH);
  delay(750);
  digitalWrite(ledRosso2, LOW);
  digitalWrite(ledGiallo2, LOW);
  digitalWrite(ledGiallo1, LOW);
}
void Lampeggio2()
{
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
}
void Lampeggio1()
{
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  Fase1();
  Fase2();
  Fase3();
  Fase4();
}


