#ifndef CONV_BLINK
#define CONV_BLINK
#include <Particle.h>

// tells the argon to light up the LED for the approriate amount of time in units based on the passed character
void ConvertToBlink(char c, int unit, int led1, int led2);

#endif