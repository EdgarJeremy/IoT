int sound = 12;


void setup() {
  // put your setup code here, to run once:
//  Serial.begin(9600); 
  pinMode(sound,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(sound,440);
}
