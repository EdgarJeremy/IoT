int sound = 2;
int led = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9200);
  pinMode(sound,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(sound));
}
