#ifndef GaragemHackerDojoPins_h
#define GaragemHackerDojoPins_h

#include "Arduino.h"

// Sensores Analogicos
#define GH_POT_PIN A4
#define GH_LDR_PIN A5
#define GH_LM35_PIN A3
// Botoes
#define GH_BOT_0_PIN A1
#define GH_BOT_1_PIN A0
#define GH_BOT_2_PIN A2
// LED RGB
#define GH_RGB_R_PIN D6
#define GH_RGB_G_PIN D5
#define GH_RGB_B_PIN D3
// LEDs Charlieplexing 
#define GH_CPLEX_0_PIN D2
#define GH_CPLEX_1_PIN D4
#define GH_CPLEX_2_PIN D7
// Servos
#define GH_SERVO_0_PIN D12
#define GH_SERVO_1_PIN D9
#define GH_SERVO_2_PIN D8
// Shift-register
#define GH_SS_PIN D10
#define GH_SCK_PIN D13
#define GH_MOSI_PIN D11
// Display Segmentos
#define GH_DISPLAY_SEG_A 0b00001000
#define GH_DISPLAY_SEG_B 0b00000001
#define GH_DISPLAY_SEG_C 0b00010000
#define GH_DISPLAY_SEG_D 0b00100000
#define GH_DISPLAY_SEG_E 0b01000000
#define GH_DISPLAY_SEG_F 0b00000010
#define GH_DISPLAY_SEG_G 0b00000100
#define GH_DISPLAY_SEG_P 0b10000000
// Digitos
#define GH_DISPLAY_DIG_0 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_E|GH_DISPLAY_SEG_F
#define GH_DISPLAY_DIG_1 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B
#define GH_DISPLAY_DIG_2 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_E|GH_DISPLAY_SEG_G
#define GH_DISPLAY_DIG_3 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_G
#define GH_DISPLAY_DIG_4 GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_F|GH_DISPLAY_SEG_G
#define GH_DISPLAY_DIG_5 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_F|GH_DISPLAY_SEG_G
#define GH_DISPLAY_DIG_6 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_E|GH_DISPLAY_SEG_F|GH_DISPLAY_SEG_G
#define GH_DISPLAY_DIG_7 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_C
#define GH_DISPLAY_DIG_8 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_E|GH_DISPLAY_SEG_F|GH_DISPLAY_SEG_G
#define GH_DISPLAY_DIG_9 GH_DISPLAY_SEG_A|GH_DISPLAY_SEG_B|GH_DISPLAY_SEG_C|GH_DISPLAY_SEG_D|GH_DISPLAY_SEG_F|GH_DISPLAY_SEG_G

#endif