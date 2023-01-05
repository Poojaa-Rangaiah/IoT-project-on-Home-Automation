#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}

unsigned int val = 0;

void brightness_control(void)
{
  val = analogRead(LDR_SENSOR);
  val = (1023 - val)/4;
  analogWrite(GARDEN_LIGHT, val);
  delay (100);
}
