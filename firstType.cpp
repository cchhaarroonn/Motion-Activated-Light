void setup()
{
  pinMode(2, INPUT); //Motion sensor input
  pinMode(3, OUTPUT); //LightBulb output
}

void loop()
{
  int read=digitalRead(2); //Read if sensor sees the motion
  if(read == HIGH){
    digitalWrite(3, HIGH); //Turn on the light bulb while it does see motion
  } else {
    digitalWrite(3, LOW); //Turn off the light bulb while it doesn't see motion
  }
  delay(1000);
}
