void setup() {
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);

}

void loop() {
  int i;
  digitalWrite (5,HIGH);
  for(i=1; i<=7; i++)
  {
    digitalWrite (4, HIGH);
    delay(285);
    digitalWrite (4, LOW);
    delay(285);
  }

    digitalWrite (5, HIGH);
    delay(1000);

}
