int sensor = A0;
int buzzer = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int res = analogRead(sensor);
  if(res > 0 && res <= 50) {
    Serial.print("Nada C ");
    Serial.println(res);
    tone(buzzer,264);
  } else if(res > 50 && res <= 100) {
    Serial.print("Nada D "); 
    Serial.println(res);
    tone(buzzer,297);
  } else if(res > 100 && res <= 150) {
    Serial.print("Nada E ");
    Serial.println(res);
    tone(buzzer,330);
  } else if(res > 150 && res <= 200) {
    Serial.print("Nada F ");
    Serial.println(res);
    tone(buzzer,352);
  } else if(res > 200 && res <= 250) {
    Serial.print("Nada G ");
    Serial.println(res);
    tone(buzzer,396);
  } else if(res > 250 && res <= 300) {
    Serial.print("Nada A ");
    Serial.println(res);
    tone(buzzer,440);
  } else if(res > 300 && res <= 350) {
    Serial.print("Nada B ");
    Serial.println(res);
    tone(buzzer,495);
  } else if(res > 350) {
    Serial.print("Nada C' Oktav ");
    Serial.println(res);
    tone(buzzer,528);
  }
  delay(400);
}
