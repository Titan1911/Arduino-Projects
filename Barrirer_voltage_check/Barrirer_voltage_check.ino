float voltage_increase = 0.51;
float initial_voltage = 0;
float output_printing;
void setup() 
{
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  analogWrite(10, initial_voltage);

  output_printing = initial_voltage/51;
  
  Serial.println(output_printing);
  
  initial_voltage = initial_voltage + voltage_increase;
  
  delay(1500);
} 
