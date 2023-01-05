#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    pinMode (HEATER, OUTPUT);
    pinMode (COOLER, OUTPUT);
    digitalWrite(HEATER, LOW);
    digitalWrite(COOLER, LOW);
}

float read_temperature(void)
{
  float temp;
  temp = float (analogRead(A0)*4.9*0.1);  
  return temp;
}

void cooler_control(bool control)
{
   digitalWrite(COOLER, control);
}
void heater_control(bool control)
{
    digitalWrite(HEATER, control);
}
