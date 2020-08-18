int ADC_value;
int Temp_value;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  ADC_value = analogRead(A1);
  Serial.println(ADC_value);
/*  Temp_value = ((ADC_value*500)/1024);
  Serial.print(Temp_value);
  Serial.print(" Degee Celcius\n");
  if (Temp_value>30)
  {
    Serial.println("Too High");
    exit(0);
  }
  if (Temp_value<29)
  {
    Serial.println("Too Low");
    
  }*/
  delay(1000);
}
