#ifndef _LED_COLOR_H_
#define _LED_COLOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "variants.h"

// data structures
#define LED_VECT_SIZE 6

// LED color components vector:
// R: red
// G: green
// B: blue
// W: white;     NEOPIXEL or RGB(W)
// P: intensity; NEOPIXEL
// I: index;     NEOPIXEL
typedef uint8_t LED_VECT[LED_VECT_SIZE];

// MYEDIT : Add LED modifiers to header.

extern const LED_VECT ledRed;
extern const LED_VECT ledGreen;
extern const LED_VECT ledBlue;
extern const LED_VECT ledWhite;
extern const LED_VECT ledOff;
extern LED_VECT ledValue;

void menuLEDColor(void);
void ledSendValue(const LED_VECT * led);

#ifdef __cplusplus
}
#endif

#endif
