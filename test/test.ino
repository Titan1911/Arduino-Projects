void setup()
{
  pinMode(13, OUTPUT);      
  pinMode(2, INPUT);    
  Serial.begin(9600);        
}

void loop()
{
 if(digitalRead(2) == HIGH) {
  digitalWrite(13, HIGH);
  Serial.println("Motion Detected");
  delay(1000);
 }
 else {
  digitalWrite(13, LOW);
  Serial.println("Motion Stopped");
  delay(1000);
 }
}
