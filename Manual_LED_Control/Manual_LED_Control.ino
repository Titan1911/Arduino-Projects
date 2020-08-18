#include<stdlib.h>
void setup() 
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);  
}

void loop() 
{
  if (Serial.available()>0)
  {

  int a = atoi(Serial.read());  
 Serial.print(a);

}
}
