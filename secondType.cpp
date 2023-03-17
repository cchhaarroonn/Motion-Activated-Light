void setup()
{
  pinMode(2, INPUT); //Motion sensor input
  pinMode(3, OUTPUT); //LightBulb output
}

void loop()
{
  int read=digitalRead(2); //Read if sensor sees any motion
  if(read == HIGH){
    digitalWrite(3, HIGH); //Turn light bulb on if it sees motion
    delay(20000); //Wait 20 seconds
  }
  digitalWrite(3, LOW); // Turn the light bulb off
}
