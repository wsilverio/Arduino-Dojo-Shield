#include <SPI.h>
#include "GaragemHackerDojoPins.h"

void setup() {
  pinMode(GH_SS_PIN, OUTPUT);
  SPI.begin();
}

void loop() {
  static byte i = 0;
  displayWrite(i++);
  if (i == 11) i = 0;
  delay(250);
}

void displayWrite(byte i) {
  byte digito[] = {
    GH_DISPLAY_DIG_0,
    GH_DISPLAY_DIG_1,
    GH_DISPLAY_DIG_2,
    GH_DISPLAY_DIG_3,
    GH_DISPLAY_DIG_4,
    GH_DISPLAY_DIG_5,
    GH_DISPLAY_DIG_6,
    GH_DISPLAY_DIG_7,
    GH_DISPLAY_DIG_8,
    GH_DISPLAY_DIG_9,
    GH_DISPLAY_SEG_P
  };

  digitalWrite(GH_SS_PIN, LOW);
  SPI.transfer(digito[i]);
  digitalWrite(GH_SS_PIN, HIGH);
}
