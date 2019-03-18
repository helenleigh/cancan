// modified from the Adafruit_DRV2605 example sketch 

#include <Wire.h>
#include "Adafruit_DRV2605.h"

Adafruit_DRV2605 drv;

void setup() {
  Serial.begin(9600);
  Serial.println("DRV test");
  drv.begin();
  
  drv.selectLibrary(1);
  
  // I2C trigger by sending 'go' command 
  // default, internal trigger when sending GO command
  drv.setMode(DRV2605_MODE_INTTRIG); 
}

uint8_t effect = 83;

void loop() {
  Serial.print("Effect #"); Serial.println(effect);

  if (effect == 83) {
    Serial.println(F("83 − Transition Ramp Up Long Smooth 2 – 0 to 100%"));
  }

  // set the effect to play
  drv.setWaveform(0, effect);  // play effect 
  drv.setWaveform(1, 0);       // end waveform

  // play the effect!
  drv.go();

  // wait a bit
  delay(5000);
}
