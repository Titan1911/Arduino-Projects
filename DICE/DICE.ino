void setup() {
  pinMode(6, OUTPUT);  //left
  pinMode(8, OUTPUT);   //single
  pinMode(10, OUTPUT);   //middle
  pinMode(12, OUTPUT);  //right
}
  void loop()
  {
  shuffle();
  long r = random(1,7);
  if(r == 1)
  {
    one();
  }
  if(r == 2)
  {
    two();
  }
  if(r == 3)
  {
    three();
  }
  if(r == 4)
  {
    four();
  }
  if(r == 5)
  {
    five();
  }
  if(r == 6)
  {
    six();
  }
  delay(3000);
  

}
  


//functions:

void off()
{
  digitalWrite(6, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
}
void shuffle()
{
  one();
  delay(90);
  off();
  delay(90);
  two();
  delay(100);
  off();
  delay(100);
  three();
  delay(100);
  off();
  delay(100);
  four();
  delay(100);
  off();
  delay(100);
  five();
  delay(100);
  off();
  delay(100);
  six();
  delay(100);
  off();
  delay(100);
  
}

void one()
{
  digitalWrite(8, HIGH);
}

void two()
{
  digitalWrite(6, HIGH);
}

void three()
{
  one();
  two();
}

void four()
{
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
}

void five()
{
  one();
  four();
}

void six()
{
  two();
  four();
}
