void setup() {
pinMode(3, OUTPUT);
}

void loop() {
  for (int i=0 ; i< 256 ; i+=5)
  {analogWrite(3,i);
   delay(250);
  }
  for (int i=255 ; i> 0 ; i-=5)
  {analogWrite(3,i);
   delay(250);
  }
 
}