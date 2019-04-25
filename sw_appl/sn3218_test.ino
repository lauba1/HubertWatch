#include <Wire.h>
#include "sn3218.h"

void setup()
{
  Serial.begin(9600);
  Serial.println("Hello World");
  //while(!Serial){}; // For Arduino Leonardo
  sn3218.begin();
  sn3218.enable_leds(SN3218_CH_ALL);
  int i = 0;
  for( i = 0; i < SN3218_NUM_CHANNELS; i++ ){
    sn3218.set(i,0);
  }
  sn3218.update();
}

void loop()
{
  sn3218.set(0,255);
  sn3218.set(10,255);
  
  sn3218.update();
  delay(1000);
}
