#include <SPI.h>
#include "GaragemHackerDojoPins.h"

void setup() {
  SPI.begin();

  pinMode(GH_SS_PIN, OUTPUT);
}

void loop() {
  // ---------------------------------
  // display 7 seg
  // ---------------------------------
  for (byte i = 0; i <= 10; ++i) {
    displayWrite(i);
    delay(180);
  }

  // reset
  displayWrite(11);

  // ---------------------------------
  // LED RGB
  // ---------------------------------
  const byte RGB[] = {GH_RGB_R_PIN, GH_RGB_G_PIN, GH_RGB_B_PIN};

  for (byte i = 0; i < 3; ++i) {
    for (int b = 0; b < 256; ++b) {
      analogWrite(RGB[i], b);
      delay(2);
    }
  }

  //reset
  analogWrite(RGB[0], 0);
  analogWrite(RGB[1], 0);
  analogWrite(RGB[2], 0);

  // ---------------------------------
  // Charlieplexing
  // ---------------------------------
  const byte CHARLIE[] = {1, 2, 4, 6, 5, 3};
  for (byte i = 0; i < 6; ++i) {
    setCharlie(CHARLIE[i]);
    delay(150);
  }
  setCharlie(0);
}

void displayWrite(byte i) {
  const byte digito[] = {
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
    GH_DISPLAY_SEG_P,
    0
  };

  digitalWrite(GH_SS_PIN, LOW);
  SPI.transfer(digito[i]);
  digitalWrite(GH_SS_PIN, HIGH);
}

void setCharlie(byte led) {
  if (led == 0) {
    pinMode(GH_CPLEX_0_PIN, OUTPUT);
    pinMode(GH_CPLEX_1_PIN, OUTPUT);
    pinMode(GH_CPLEX_2_PIN, OUTPUT);
    digitalWrite(GH_CPLEX_0_PIN, LOW);
    digitalWrite(GH_CPLEX_1_PIN, LOW);
    digitalWrite(GH_CPLEX_2_PIN, LOW);
  }
  if (led == 1) {
    pinMode(GH_CPLEX_0_PIN, OUTPUT);
    pinMode(GH_CPLEX_1_PIN, INPUT);
    pinMode(GH_CPLEX_2_PIN, OUTPUT);
    digitalWrite(GH_CPLEX_0_PIN, HIGH);
    digitalWrite(GH_CPLEX_2_PIN, LOW);
  } else if (led == 2) {
    pinMode(GH_CPLEX_0_PIN, OUTPUT);
    pinMode(GH_CPLEX_1_PIN, INPUT);
    pinMode(GH_CPLEX_2_PIN, OUTPUT);
    digitalWrite(GH_CPLEX_0_PIN, LOW);
    digitalWrite(GH_CPLEX_2_PIN, HIGH);
  } else if (led == 3) {
    pinMode(GH_CPLEX_0_PIN, OUTPUT);
    pinMode(GH_CPLEX_1_PIN, OUTPUT);
    pinMode(GH_CPLEX_2_PIN, INPUT);
    digitalWrite(GH_CPLEX_0_PIN, HIGH);
    digitalWrite(GH_CPLEX_1_PIN, LOW);
  } else if (led == 4) {
    pinMode(GH_CPLEX_0_PIN, OUTPUT);
    pinMode(GH_CPLEX_1_PIN, OUTPUT);
    pinMode(GH_CPLEX_2_PIN, INPUT);
    digitalWrite(GH_CPLEX_0_PIN, LOW);
    digitalWrite(GH_CPLEX_1_PIN, HIGH);
  } else if (led == 5) {
    pinMode(GH_CPLEX_0_PIN, INPUT);
    pinMode(GH_CPLEX_1_PIN, OUTPUT);
    pinMode(GH_CPLEX_2_PIN, OUTPUT);
    digitalWrite(GH_CPLEX_1_PIN, HIGH);
    digitalWrite(GH_CPLEX_2_PIN, LOW);
  } else if (led == 6) {
    pinMode(GH_CPLEX_0_PIN, INPUT);
    pinMode(GH_CPLEX_1_PIN, OUTPUT);
    pinMode(GH_CPLEX_2_PIN, OUTPUT);
    digitalWrite(GH_CPLEX_1_PIN, LOW);
    digitalWrite(GH_CPLEX_2_PIN, HIGH);
  }
}
